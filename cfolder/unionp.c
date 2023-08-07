#include <stdio.h>
int main()
{
    int arr[]={2,6,4,7,6,9,3,6,9,5,6,7,4,6,3};
    int brr[]={3,4,8,5,11,24,6,5,6,6} ;
    int *ptr=arr;
    int lena=sizeof(arr)/sizeof(arr[0]) ;
    int lenb=sizeof(brr)/sizeof(brr[0]) ;
    int iss[100];
    int c=0 ;
    for (int i=0;i<lena;i++){
        for (int j=0;j<lenb;j++){
            if(arr[i]==brr[j]){
                int f=0 ;
                for (int k=0;k<c;k++){
                    if(iss[k]==arr[i]){
                        f=1;
                    }
                }
                if(f==0){
                    iss[c]=arr[i] ;
                    c++;
                }
            }
        }
    }
    printf("intersection : ");
    for(int i=0;i<c;i++){
        printf("%d ",iss[i]) ;
    }
    printf("\n") ;
    int uni[100];
     c=0 ;
    for (int i =0;i<lena;i++){
        int ff=0 ;
        for(int k=0;k<c;k++){
            if(uni[k]==arr[i]){
                ff = 1 ;
                break ;
            }
            
        }
        
        if(ff==0){
            uni[c]=arr[i] ;
            c++ ;
        }
    }
    for (int i =0;i<lenb;i++){
        int fff=0 ;
        for(int k=0;k<c;k++){
            if(uni[k]==brr[i]){
                fff = 1 ;
            }
        }
        if (fff==0){
            uni[c]=brr[i] ;
            c++ ;
        }
    }
    printf("union : ");
    for(int i=0;i<c;i++){
        printf("%d ",*ptr+i) ;
    } 
    return 0;
}
