///\file main.c
///\brief C library implementation to generate sparse matrices
///\brief The program implements functions to generate a sparse matrix,to write a matrix,
///\brief to allocate a matrix and a final function which includes all of the previous functions
///\brief and is used in the main program.

#include"functions.h"
#include<stdio.h>///> printf() , scanf() , fprintf() , fscanf()
#include<malloc.h>///>malloc()
#include<math.h>///> addion, multiplication, pow(a,b)..and so on..
#include<conio.h>///> For Visual Studio: _getche()
#include<stdbool.h>///> bool type (true or false)
#include<stdlib.h>
#include<time.h>///>time()


int main ()
{
    int option,lines,columns,aux;
    srand(time(NULL));//!< helping for generate numbers

    printf("Project created by Andrei Mateescu, student at University of Craiova\n");
    printf("Menu for this project\n");

    printf("For chooses one options press to one number beetwen 1-7\n\n");
    printf("1 - addition\n2 - diference (first - second)\n3 - diference (second - first)\n4 - multiplication without safety");
    printf("\n5 - multiplication safety\n6 - Involution\n7 - EXIT");

    printf("\nYour option: "); scanf("%d", &option);
    while(option!=7){
        if(option == 1){
            printf("You chossen addion\n");

            lines=rand()%5+1;
            columns=rand()%5+1;
            printf("Lines %d\nColumns: %d\n",lines,columns);
            getch();

            matrix_one=create(lines,columns);
            printf("Generating first matrice: \n");
            print_matrix(matrix_one,lines,columns);
            printf("\n");

            matrix_two=create(lines,columns);
            printf("Generating second matrice: \n");
            print_matrix(matrix_two,lines,columns);
            printf("\n");

            matrix_three=addition(matrix_one,matrix_two);
            printf("Final matrice: \n");
            printf("\nPrint to screen - 8\nPrint into file - 9: "); scanf("%d", &aux);
            if(aux == 8)
                print_matrix(matrix_three,lines,columns);
            else
                if(aux == 9)
                    print_matrix_file(matrix_three,lines,columns);
                else
                    printf("Option invalable\n");
        }
        else{
            if(option == 2){
            printf("You chossen diference (first - second)\n");

            lines=rand()%5+1;
            columns=rand()%5+1;
            printf("Lines %d\nColumns: %d\n",lines,columns);
            getch();

            matrix_one=create(lines,columns);
            printf("Generating first matrice: \n");
            print_matrix(matrix_one,lines,columns);
            printf("\n");

            matrix_two=create(lines,columns);
            printf("Generating second matrice: \n");
            print_matrix(matrix_two,lines,columns);
            printf("\n");

            printf("Final matrice: \n");
            matrix_three = diference(matrix_two,matrix_one);
            printf("\nPrint to screen - 8\nPrint into file - 9: "); scanf("%d", &aux);
            if(aux == 8)
                print_matrix(matrix_three,lines,columns);
            else
                if(aux == 9)
                    print_matrix_file(matrix_three,lines,columns);
                else
                    printf("Option invalable\n");
            }
            else{
                if(option == 3){
                    printf("You chossen diference (second - first)\n");

                    lines=rand()%5+1;
                    columns=rand()%5+1;
                    printf("Lines %d\nColumns: %d\n",lines,columns);
                    getch();

                    matrix_one=create(lines,columns);
                    printf("Generating first matrice: \n");
                    print_matrix(matrix_one,lines,columns);
                    printf("\n");

                    matrix_two=create(lines,columns);
                    printf("Generating second matrice: \n");
                    print_matrix(matrix_two,lines,columns);
                    printf("\n");

                    printf("Final matrice: \n");
                    matrix_three = diference(matrix_one,matrix_two);
                    printf("\nPrint to screen - 8\nPrint into file - 9: "); scanf("%d", &aux);
                    if(aux == 8)
                        print_matrix(matrix_three,lines,columns);
                    else
                        if(aux == 9)
                            print_matrix_file(matrix_three,lines,columns);
                        else
                            printf("Option invalable\n");
                }
                else{
                    if(option == 4){
                        int columns1,columns2,lines1,lines2;
                        printf("You chossen multiplication without safety\n");

                        lines1=rand()%5+1;
                        columns1=rand()%5+1;
                        printf("Dimensions first matrice: %d lines %d columns\n",lines1,columns1);
                        getch();

                        lines2=rand()%5+1;
                        columns2=rand()%5+1;
                        printf("Dimensions second matrice: %d lines %d columns\n",lines2,columns2);
                        getch();

                        if (columns1!=lines2){
                            printf("Impossbile to multiplication");
                            printf("\n");
                        }
                        else{
                        matrix_one=create(lines1,columns1);
                        printf("Generating first matrice: \n");
                        print_matrix(matrix_one,lines1,columns1);
                        printf("\n");

                        matrix_two=create(lines2,columns2);
                        printf("Generating second matrice: \n");
                        print_matrix(matrix_two,lines2,columns2);
                        printf("\n");

                        printf("Final matrice: \n");
                        matrix_three=multiplication(lines1,columns1,columns2,matrix_one,matrix_two);
                        printf("\nPrint to screen - 8\nPrint into file - 9: "); scanf("%d", &aux);
                        if(aux == 8)
                            print_matrix(matrix_three,lines1,columns2);
                        else
                            if(aux == 9)
                                print_matrix_file(matrix_three,lines1,columns2);
                            else
                                printf("Option invalable\n");
                        }
                    }
                    else{
                        if(option == 5){
                            int lines1,columns1,columns2;
                            printf("You chossen multiplication safety\n");

                            lines1=rand()%5+1;
                            columns1=rand()%5+1;
                            printf("Dimensions first matrice: %d lines %d columns\n",lines1,columns1);
                            getch();

                            columns2=rand()%5+1;
                            printf("Dimensions second matrice: %d lines %d columns\n",columns1,columns2);
                            getch();

                            matrix_one=create(lines1,columns1);
                            printf("Generating first matrice: \n");
                            print_matrix(matrix_one,lines1,columns1);
                            printf("\n");

                            matrix_two=create(columns1,columns2);
                            printf("Generating second matrice: \n");
                            print_matrix(matrix_two,columns1,columns2);
                            printf("\n");

                            printf("Final matrice: \n");

                            matrix_three=multiplication(lines1,columns1,columns2,matrix_one,matrix_two);
                            printf("\nPrint to screen - 8\nPrint into file - 9: "); scanf("%d", &aux);
                            if(aux == 8)
                                print_matrix(matrix_three,lines1,columns2);
                            else
                                if(aux == 9)
                                    print_matrix_file(matrix_three,lines1,columns2);
                                else
                                    printf("Option invalable\n");

                        }
                            else{
                                if (option == 6){
                                    matrix *r,*first,*last;
                                    int power,i;
                                    printf("You chossen involution\n");

                                    lines=rand()%5+1;
                                    columns=lines;

                                    matrix_one=create(lines,columns);
                                    printf("Generating matrice: ");
                                    print_matrix(matrix_one,lines,columns);
                                    printf("\n");

                                    p=matrix_one;
                                    r=(matrix*)malloc(sizeof(matrix));
                                    first=last=r;
                                    while (p!=NULL){
                                          r=(matrix*)malloc(sizeof(matrix));
                                          r->data=p->data;
                                          r->line=p->line;
                                          r->column=p->column;
                                          last->next=r;
                                          last=r;
                                          last->next=NULL;
                                          p=p->next;
                                      }
                                    p=first;
                                    matrix_two=first->next;
                                    free(p);

                                    power=rand()%20+1;

                                    printf("Genrating the power:%d\n",power);

                                    for (i=1;i<=power-1;i++){
                                            matrix_three=involution(lines,matrix_two,matrix_one);
                                            matrix_two=matrix_three;
                                        }

                                    printf("\nPrint to screen - 8\nPrint into file - 9: "); scanf("%d", &aux);
                                    if(aux == 8)
                                        print_matrix(matrix_three,lines,columns);
                                    else
                                        if(aux == 9)
                                            print_matrix_file(matrix_three,lines,columns);
                                        else
                                            printf("Option invalable\n");
                                    }
                                }
                            }
                        }
                    }
                }
                printf("Your option: "); scanf("%d", &option);
            }
}
