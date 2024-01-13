#include<stdio.h>

typedef struct st{
    int i;
    float f;
}st;

int main()
{
    st s1={10,3.14},s2;
    FILE *fptr = fopen("binary_data.txt","wb+");
    fwrite(&s1,1,sizeof(s1),fptr);//to write in binary
    rewind(fptr);//kyunki write krne ke baad pointer EOF pe hoga
    fread(&s2,1,sizeof(s2),fptr);
    printf("%d, %.2f\n",s2.i,s2.f);

    fclose(fptr);
    // rename("binary_data.txt","struct_data.txt");
    remove("binary_data.txt");
    return 0;
}