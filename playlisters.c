#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

void test(void);

void fill_playlist(int a[], int n);
void shuffle_playlist(int a[], int n);

int main(void)
{
  int *songs, i, number;
  srand(time(NULL));

  printf("How many songs required? ");

  if(scanf("%d", &number) == 1){
    songs = (int*)malloc(sizeof(int)*number);
    fill_playlist(songs, number);
    shuffle_playlist(songs, number);
    for(i = 0; i < number; i++){
      printf("%d\n", songs[i]);
    }
    free(songs);
  }
  else{
    printf("You did not enter an integer!\n");
  }
  return 0;
}

void fill_playlist(int a[], int n)
{
  int i;
  for(i = 0; i < n; i++){
    a[i] = i + 1;
  }
}

void shuffle_playlist(int a[], int n)
{
  int i, j, temp;

  for(i = 0; i < n; i++){
    j = (rand() % n);
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
}

void test(void)
{

}
