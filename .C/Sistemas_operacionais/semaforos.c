A semaforização em C é amplamente utilizada para controle de acesso a recursos compartilhados em ambientes de programação concorrente, como threads ou processos. Semáforos ajudam a evitar condições de corrida e garantem que apenas um número limitado de threads ou processos acesse um recurso ao mesmo tempo.

Aqui está um exemplo básico de como implementar semáforização em C usando a biblioteca POSIX (semaphore.h):

Exemplo de Semáforo em C
Copiar o código
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define NUM_THREADS 5

sem_t semaforo; // Declaração do semáforo

void* tarefa(void* arg) {
    int id = *(int*)arg;

    printf("Thread %d aguardando o semáforo...\n", id);
    sem_wait(&semaforo); // Decrementa o semáforo (espera)

    printf("Thread %d entrou na seção crítica.\n", id);
    sleep(2); // Simula trabalho na seção crítica
    printf("Thread %d saindo da seção crítica.\n", id);

    sem_post(&semaforo); // Incrementa o semáforo (libera)
    free(arg);
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];

    // Inicializa o semáforo com valor 2 (máximo de 2 threads na seção crítica)
    sem_init(&semaforo, 0, 2);

    for (int i = 0; i < NUM_THREADS; i++) {
        int* id = malloc(sizeof(int));
        *id = i + 1;
        pthread_create(&threads[i], NULL, tarefa, id);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    sem_destroy(&semaforo); // Destroi o semáforo
    return 0;
}

Explicação do Código

Declaração e Inicialização:

O semáforo é declarado com sem_t e inicializado com sem_init. O valor inicial define quantas threads podem acessar a seção crítica simultaneamente.

Controle de Acesso:

sem_wait: Decrementa o semáforo. Se o valor for zero, a thread espera até que outro processo libere o semáforo.
sem_post: Incrementa o semáforo, liberando o acesso para outra thread.

Seção Crítica:

Apenas um número limitado de threads (neste caso, 2) pode acessar a seção crítica ao mesmo tempo.

Finalização:

sem_destroy libera os recursos associados ao semáforo.
Saída Esperada

A saída mostrará as threads aguardando, entrando e saindo da seção crítica, respeitando o limite imposto pelo semáforo.

Se precisar de mais detalhes ou adaptações, é só avisar! 😊