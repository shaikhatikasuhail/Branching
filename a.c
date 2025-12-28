#include<stdio.h>
#include<stdlib.h>
int R,C;
int i, j;
int mat[10][10];
void display( int, int);
void input( int, int);
intRank_Mat(int , int);
void swap(int, int, int);
void swap( int row1,int row2, int col) /* This function exchange two rows of a matrix */
{
for(i = 0; i< col; i++)
    {
int temp = mat[row1][i];
mat[row1][i] = mat[row2][i];
mat[row2][i] = temp;
    }
}
intRank_Mat(int row1, int col1) /* This function find rank of matrix */
{   int r, c;
for(r = 0; r< col1; r++)
    {
display(R,C);
if( mat[r][r] )  // Diagonal element is not zero
for(c = 0; c < row1; c++)
if(c != r)
            {
float ratio = mat[c][r]/ mat[r][r];
for(i = 0; i< col1; i++)
mat[c][i] -= ratio * mat[r][i];
            }
else
printf("\n");
else
          {
for(c =  r+1 ; c < row1;  c++)
if (mat[c][r])
                {
swap(r,c,col1);
break ;
                }
if(c == row1)
            {
                -- col1;

for(c = 0; c < row1; c ++)
mat[c][r] = mat[c][col1];
            }
            --r;
          }
    }
return col1;
}
void display( int row, int col)
{
for(i = 0; i< row; i++)
    {
for(j = 0; j < col; j++)
        {
printf("  %d", mat[i][j]);
        }
printf("\n");
    }
}
void input( int row, int col)
{
int value;
for(i = 0 ; i< row; i++)
    {
for(j = 0 ;  j<col; j++)
        {
printf("enter Value for matrix[%d][%d]: ", i+1, j+1);
scanf("%d",  &value);
mat[i][j] = value;
        }
    }
}
void main()
{
int rank;
printf("Name:Shweta\nRoll no:142\n");
printf("\n enter number of rows:");
scanf("%d", &R);
printf("\n enter number of columns:");
scanf("%d", &C);
input(R, C);
printf("\n Row is : %d", R);
printf("\n Column is : %d \n", C);

printf("\n Entered Two Dimensional array is as follows:\n");
display(R,C);
printf("\n Row is : %d", R);
printf("\n Column is : %d\n", C);

rank = Rank_Mat(R, C);
printf("\n Rank of above matrix is : %d", rank);
system("pause");
}
