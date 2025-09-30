--1. Retorne os empregados que trabalham no departamento 5
SELECT RG, sexo, dt_nasc, pnome, unome, rua, cidade, estado, salario, dnum, supRG  
FROM Empregado WHERE dnum = 5;

--2. Retorne os empregados com salário maior que 3000,00
SELECT RG, sexo, dt_nasc, pnome, unome, rua, cidade, estado, salario, dnum, supRG 
FROM Empregado WHERE salario > 3000.00;

--3. Retorne os empregados que trabalham no departamento 5 e têm salário maior que 3000,00
SELECT RG, sexo, dt_nasc, pnome, unome, rua, cidade, estado, salario, dnum, supRG 
FROM Empregado WHERE dnum = 5 AND salario > 3000.00;

--4. Retorne os empregados que trabalham no departamento 5 e têm salário maior que 3000,00 ou que trabalham no departamento 4 e têm salário maior que 2000,00
SELECT RG, sexo, dt_nasc, pnome, unome, rua, cidade, estado, salario, dnum, supRG FROM Empregado WHERE (dnum = 5 AND salario > 3000.00) OR (dnum = 4 AND salario > 2000.00);

--5. Retorne o primeiro nome e o salário de cada empregado
SELECT pnome, salario FROM Empregado;

--6. Retorne o primeiro nome e o salário dos empregados que trabalham no departamento 5
SELECT pnome, salario FROM Empregado WHERE dnum = 5;

--7. Retorne o RG de todos os empregados que trabalham no departamento 5 ou supervisionam diretamente um empregado que trabalha no departamento 5
SELECT Empregado.RG 
FROM Empregado 
WHERE Empregado.dnum = 5 OR Empregado.RG IN (SELECT supRG From Empregado WHERE dnum = 5);

--8. Retorne os primeiros nomes de empregados que são iguais a nomes de dependentes
SELECT Empregado.pnome
FROM Empregado
INNER JOIN Dependente ON Empregado.pnome = Dependente.dep_nome;

--9. Retorne todas as combinações de primeiro nome de empregados e nome de dependentes
SELECT Empregado.pnome, Dependente.dep_nome
FROM Empregado
CROSS JOIN Dependente;

--10. Retorne os nomes dos empregados e de seus respectivos dependentes
SELECT Empregado.pnome, Dependente.dep_nome
FROM Empregado
INNER JOIN Dependete ON Empregado.RG = Dependente.emp_RG;

--11. Retorne o nome do gerente de cada departamento
SELECT Empregado.pnome, Departamento.dnome
FROM Empregado
INNER JOIN Departamento ON Empregado.RG = Departamento.gerenteRG;

--12. Retorne todas as localizações de cada departamento usando junção natural
SELECT localizacao, dnome
FROM Localizacao
NATURAL JOIN Departamento;

--13. Retorne o nome do empregado e o nome de cada projeto que ele trabalha
SELECT Empregado.pnome, Projeto.nome
FROM Empregado
INNER JOIN Trabalha_em on Empregado.RG = Trabalha_em.RG
INNER JOIN Projeto on Trabalha_em.pnum = Projeto.pnum;

--14. Retorne o nome dos empregados que trabalham em algum projeto controlado pelo departamento 5
SELECT Empregado.pnome
FROM Empregado
INNER JOIN Trabalha_em on Empregado.RG = Trabalha_em.RG
INNER JOIN Projeto on Trabalha_em.pnum = Projeto.pnum
WHERE Projeto.dnum = 5;

--15. Retorne o número de empregados da empresa
SELECT COUNT(RG) FROM Empregado;

--16. Retorne o número do departamento e o número de empregados de CADA departamento da empresa
SELECT dnum, COUNT(RG) FROM Empregado GROUP BY dnum;

--17. Retorne o número do departamento e a média do salário dos empregados de CADA departamento da empresa
SELECT dnum, AVG(salario) FROM Empregado GROUP BY dnum;

--18. Retorne o nome e o endereço de todos os empregados que trabalham no departamento ‘Pesquisa’
SELECT Empregado.pnome, Empregado.rua, Empregado.cidade, Empregado.estado
FROM Empregado
INNER JOIN Departamento ON Empregado.dnum = Departamento.dnum
WHERE Departamento.dnome = 'Pesquisa';

--19. Para cada projeto localizado em ‘Londrina’, retorne o número do projeto, o número do departamento que o controla, e o nome e sexo do gerente do departamento
SELECT Projeto.pnum, Projeto.pnome, Projeto.dnum, Empregado.pnome, Empregado.sexo
FROM Projeto
INNER JOIN Departamento ON Projeto.dnum = Departamento.dnum
INNER JOIN Empregado ON Departamento.gerRG = Empregado.RG
WHERE Projeto.localizacao = 'Londrina';
