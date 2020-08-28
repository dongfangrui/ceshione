#include <stdio.h>
#include <malloc.h>
#include <memory.h>
int buff[14]={6,6,5,4,3,2,1,1,2,3,2,2,2,0};

// int sort1(int buf[],int len)
// {
//     int tmp;
//     for(int i=0;i<len;i++)
//     {
//         for(int j=0;j<len;j++)
//         {
//             if(buf[i]<buf[j])
//             {
//                 tmp=buf[i];
//                 buf[i]=buf[j];
//                 buf[j]=tmp;
//             }
//         }
//     }
// }



// int sort2(int buf[],int len)
// {
//     int tmp;
//     int min;
//     for(int i=0;i<len;i++)
//     {
//         min=i;
//         for(int j=i+1;j<len;j++)
//         {
//             if(buf[j]<buf[min])
//                 min=j;
//         }
//         tmp=buf[i];
//         buf[i]=buf[min];
//         buf[min]=tmp;
//     }
// }

// int sort3(int buf[],int len)
// {
//     int tmp;
//     int min;
//     for(int i=0;i<len;i++)
//     {
//         for(int j=i;j>0;j--)
//         {
//             if(buf[j]<=buf[j-1])
//             {
//                 tmp=buf[j];
//                 buf[j]=buf[j-1];
//                 buf[j-1]=tmp;
//             }
//         }       
//     }
//     return 0;
// }

// int sort4(int buf[],int low,int high)
// {
//     if(low>=high)
//         return 0;
//     int tmp;
//     int left=low,right=high+1,pivot;
//     pivot=buf[low];
//     while (1/* condition */)
//     {
//         /* code */
//         while(buf[++left]<pivot)
//         {
//           //  left++;
//             if(left==high)
//             break;
//         }
//         while (buf[right--]>pivot/* condition */)
//         {
//             /* code */
//           //  right--;
//             if(right==low)
//                 break;
//         }
//         if(left>=right)
//             break;
//         tmp=buf[right];
//         buf[right]=buf[left];
//         buf[left]=tmp;
        
//     }
//     buf[low]=buf[left-1];
//     buf[left-1]=pivot;
//     sort4(buf,low,right);
//     sort4(buf,right+1,high);
    
//     return 0;
// }
// int merge(int buf[],int low ,int mid,int high)
// {
//     int temp[10];
//     int i,j,k=0;
//     i = low;
//     j=mid+1;
//     for(;i<=mid&&j<=high;)
//     {
//         if(buf[i]<=buf[j])
//             temp[k++]=buf[i++];
//         else
//         {
//             temp[k++]=buf[j++];
            
//         }
            
//     }

//     while(j<=high)
//     {
//         temp[k++]=buf[j++];
//     }
//     while (i<=mid/* condition */)
//     {
//         /* code */
//         temp[k++]=buf[i++];
//     }
//     for(int t=0;t<k;t++)
//         buf[low+t]=temp[t];


// }

// int sort5(int buf[],int low,int high)
// {
    
//     if(low>=high)
//         return 0;
//     int tmp;
//     int mid;
//     mid=(low+high)/2;
//     sort5(buf,low,mid);
//     sort5(buf,mid+1,high);
//     merge(buf,low,mid,high);
// }

// void merge(int buf[],int low,int mid,int high,int len)
// {
//     int *p=(int *)malloc(len*sizeof(int));
//     int i=low,j=mid+1,k=0;
//     memset(p,0,len);
//     for(;i<=mid&&j<=high;)
//     {
//         if (/* condition */buf[i]<=buf[j])
//         {
//             /* code */
//             p[k++]=buf[i++];
//         }
//         else
//         {
//             /* code */
//             p[k++]=buf[j++];
//         }
//     }
//     while(i<=mid)
//     {
//         p[k++]=buf[i++];
//     }
//     while(j<=high)
//     {
//         p[k++]=buf[j++];
//     }
//     for(int t=0;t<k;t++)
//     {
//         buf[t+low]=p[t];
//     }
//     free(p);
// }
// void sort5(int buf[],int low,int high)
// {
//     int mid;
//     if(low>=high)
//     return;
//     mid=(low+high)/2;
//     sort5(buf,low,mid);
//     sort5(buf,mid+1,high);
//     merge(buf,low,mid,high,7);

// }


// void heapx(int index,int buf[],int len)
// {
//     int i,j,k,tmp;
//     i=index;
//     if(buf[i]<buf[2*i+1])
//     {
//         tmp=buf[2*i+1];
//         buf[2*i+1]=buf[i];
//         buf[i]=tmp;
//     }
//     if((2*i+2)<=(len))
//     {
//         if(buf[i]<buf[2*i+2])
//         {
//             tmp=buf[2*i+2];
//             buf[2*i+2]=buf[i];
//             buf[i]=tmp;
//         }       
//     }
// }

// void sort6(int buf[],int len)
// {
//     int i=0,j=0,k;
//     int tmp,lentmp;
//     lentmp=len-1;
//     for(j=0;j<len;j++)
//     {
//         k=(lentmp-2)/2;
//         for(i=k;i>=0;i--)
//         {
//             heapx(i,buf,lentmp);
//         }
//         tmp=buf[0];
//         buf[0]=buf[lentmp];
//         buf[lentmp--]=tmp;
//     }
// }

void sort7(int buf[],int len)
{
    int max,min,chazhi;
    int *p;
  //  int p[7]={0,0,0,0,0,0,0};
    int i=0,j=0,k=0;
    max=buf[0];
    min=buf[0];
    for(i=0;i<len;i++)
    {
        if(buf[i]>max)
        max=buf[i];
        if(buf[i]<min)
        min=buf[i];
    }
    chazhi=max-min;
    p=(int *)malloc((chazhi+1)*sizeof(int));
    memset(p,0,chazhi+1);
    k=0;
    for(j=min;j<max+1;j++)
    {
        for(i=0;i<len;i++)
        {
            if(buf[i]==j)
                p[k]++;
        }
        k++;
    }
   
    j=0;
    i=0;
    k=0;
    while(i<len)
    {
        if(j>chazhi)
            break;
        if(p[j]==0)
        {
            j++;
            continue;
        }
        for(k=p[j];k>0;k--)
        {
            buf[i++]=min+j;
        }
        j++;
    
        
    }    
    free(p);

}

int main()
{
    int i=0;
    
    // while(1)
    // {
        
        sort7(buff,14);
    for(i=0;i<14;i++)
       printf("%d\n",buff[i]);
  //  }
    return 1; 
}