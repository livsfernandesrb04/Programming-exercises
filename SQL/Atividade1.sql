create database if not exists Sistema_de_Biblioteca_Escolar;

use Sistema_de_Biblioteca_Escolar;

create table Pessoa(
	CPF decimal(11) unique not null,
	Nome varchar(255) not null,
	Data_nasc date not null
);

create table Autor(
	ID int primary key auto_increment,
	PessoaID decimal(11) unique not null,
    constraint pessoaid_fk
    foreign key(PessoaID) references Pessoa(CPF)
    on update cascade
    on delete restrict
);

create table Livro(
	ISBN decimal(13) primary key,
    Titulo varchar(255) not null,
    Editora varchar(255) not null,
    Ano smallint 
);

create table Relacao_livro_autor(
	AutorID int not null,
	LivroID decimal(13) not null,
    primary key(AutorID, LivroID),
    constraint autoridfk
	foreign key(AutorID) references Autor(ID),
    constraint livroidfk
	foreign key(LivroID) references Livro(ISBN)
    on update cascade
    on delete restrict
);

create table Aluno(
	Matricula varchar(10) primary key not null,
	Entrada date not null,
	Ativo boolean not null,
    PessoaID decimal(11) unique not null,
    constraint FKpessoaid
    foreign key(PessoaID) references Pessoa(CPF)
    on update cascade
    on delete restrict
);

create table Emprestimos(
	ID int primary key auto_increment not null,
	Data_emprestimo datetime not null,
	Data_devolucao datetime not null,
    AlunoMatricula varchar(15) not null,
    LivroISBN decimal(13) not null, 
    constraint alunomatric_fk
    foreign key(AlunoMatricula) references Aluno(Matricula), 
    constraint livroisbn_fk
    foreign key(LivroISBN) references Livro(ISBN)
    on update cascade
    on delete restrict
);

create table Curso(
	Codigo int primary key auto_increment,
	Nome varchar(255) not null
);

create table Turma(
	Codigo int primary key auto_increment,
	Semestre smallint not null
);

create table Relacao_alunos_curso_e_turmas(
	codigo_curso int,
    codigo_turma int,
    matricula_aluno varchar(15) not null,
    primary key(codigo_curso, codigo_turma),
    constraint matriculaAluno_fk
    foreign key(matricula_aluno) references Aluno(Matricula), 
    constraint cursoCod_fk
    foreign key(codigo_curso) references Curso(Codigo),
    constraint turmaCod_fk
    foreign key(codigo_turma) references Turma(Codigo)
    on update cascade
    on delete restrict
);

insert into Pessoa(CPF, Nome, Data_nasc) values
((12345678909), ("Amanda Ribeiro Costa"), ("1990-03-14")), 
((98765432100), ("Bruno Martins Oliveira"), ("1995-07-22")), 
((74185296310), ("Carla Mendes Ferreira"), ("1993-05-12")),
((36925814720), ("Diego Souza Lima"), ("2002-01-30")),
((25814736930), ("Fernanda Rocha Alves"), ("1995-06-18")),
((65432198740), ("Gustavo Pereira Duarte"), ("2001-09-09"));

insert into Autor(PessoaID) values
((12345678909)), 
((98765432100)), 
((74185296310));

insert into Aluno(Matricula, Entrada, Ativo, PessoaID) values
(("2025001"), ("2025-02-01"), true, (36925814720)),
(("2025002"), ("2025-02-02"), true, (25814736930)),
(("2020002"), ("2020-02-03"), false, (65432198740));

insert into Livro(ISBN, Titulo, Editora, Ano) values
((9788512345012), ("O Último Horizonte"), ("Aurora Literária"), (2022)),
((9788567890025), ("Fragmentos do Silêncio"), ("Editora Veredas"), (2020)),
((9788554321038), ("Códigos da Tempestade"), ("Prisma Editorial"), (2024));

insert into Relacao_livro_autor(AutorID, LivroID) values
((1), (9788512345012)),
((2), (9788567890025)),
((3), (9788554321038));

insert into Emprestimos(Data_emprestimo, Data_devolucao, AlunoMatricula, LivroISBN) values
(("2025-02-01 10:00:00"), ("2025-02-15 14:30:00"), ("2025001"), (9788512345012)),
(("2025-02-02 12:00:00"), ("2025-02-16 09:15:00"), ("2025002"), (9788567890025)),
(("2020-02-03 09:45:00"), ("2020-02-17 10:00:00"), ("2020002"), (9788554321038));

insert into Curso(Nome) values
("Ciência da Computação"),
("Engenharia de Software"),
("Sistemas de Informação");

insert into Turma(Semestre) values
(1), (2), (3), (4), (5), (6), (7), (8);

insert into Relacao_alunos_curso_e_turmas(codigo_curso, codigo_turma, matricula_aluno) values
((1), (2), ("2025001")),
((2), (2), ("2025002")),
((3), (8), ("2020002"));
