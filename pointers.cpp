// //***Pointer to a Variable***//
//     #include<iostream>

//     using namespace std;

//     int main()
//     {
//     int a=10;
//     int *p;  //decleartion of pointer
//     p=&a;    // address of a stored in p

//     printf("using pointr %d",p);

//     }


//***pointer to an array// 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int A[5]={1,2,3,4,5};    //created inside stack
//     int *p;
//     p=A;

//     for (int i = 0; i < 5; i++)
//     {
//         cout<<p[i]<<endl;

//     }
//     return 0;
// }

    /*#include<iostream>
    using namespace std;

    int main()
    {
    int *p;
    p=new int[5]; //memory created in heap
    p[0]=1; p[1]=2;

    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;

    }
    delete [] p;
        return 0;
    }
    */

  /******Pointer to a structure *******/
  
   #include<iostream>
   using namespace std;

   struct Rectangle
   {
       int length;
       int breath;

   };
   
   int main ()
   {
       struct Rectangle *p;
       p=new Rectangle; // to assign memory in a heap
       p->length=15;
       p->breath=10;
       cout<<p->length<<endl;
       cout<<p->breath<<endl;
       return 0;
   }


   

