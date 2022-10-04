#include <iostream>
#include <stdio.h>
#include <iostream>

int main() {
    using namespace std;
    int predel,user_number = 0,n = 0,i = 0,maxint = 0;
    FILE *f1, *f2;
    
    f1=fopen("predel.txt","r");
    fscanf(f1,"%d",&predel);
    fclose(f1);
    
    while(n < predel){
        cout<<"Введите число - "<<"\n";
        cin>>user_number;
        n += user_number;
        i++;
        if(maxint < user_number){
            maxint = user_number;
        }
    
    }
    cout<<n;
    f2 = fopen("kolmax.txt","w");
    fprintf(f2,"Количство введённых числ - %d, максимальное из них - %d",i,maxint);

    return 0;
}