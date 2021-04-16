using namespace std;
#include<iostream>
#include<malloc.h>
#include<cstdlib>
#include<cmath>
#define max 5
class pro
 {
    public:
    int j,a[20],flag,k,i,item,pos,n,f,r,b[max],element,top;

 struct node
{
   int data;
   struct node*next;
   struct node*prev;
   struct node*left;
   struct node*right;
};
  struct node*s=NULL;



            pro()
 {
           f=-1;
           r=-1;
          flag=0;
          top=-1;
 }


  void  array()
{
do
{
     cout<<"\n";
    cout<<"MENU"<<endl;
    cout<<"1.INSERTION IN ARRAY"<<endl;
    cout<<"2.DELETION IN ARRAY"<<endl;
    cout<<"3.SEARCHING IN ARRAY"<<endl;
    cout<<"4.SORTING IN ARRAY"<<endl;
    cout<<"5.DISPLAY"<<endl;
    cout<<"6.EXIT"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>j;
switch(j)
 {
    case 1:
   inser_arr();
   break;

   case 2:
   del();
   break;

   case 3:
   search();
   break;

   case 4:
   sort();
   break;

   case 5:
   display();
   break;

   case 6:
   exit(0);
   break;

   default:
   cout<<"incorrct choice";
 }
 }while(j<=6);
 }

       void inser_arr()
 {
// int a[20],k,i,j,item;
    cout<<"enter elements in array";

     for(i=0;i<10;i++)
 {
     cin>>a[i];
 }
     cout<<"enter the location u want to insert"<<endl;
    cin>>j;
    cout<<"enter the new value"<<endl;  
 cin>>item;

 for(k=9;k>j;k--)
 {
  a[k]=a[k-1];
 }
 a[j]=item;

 }

void del()
 {

 cout<<"enter the location u want to delete the element";
 cin>>pos;

for(i=pos-1;i<9;i++)
 {
  a[i]=a[i+1];
 }
 }

void sort()
{
 int temp;

 for(i=0;i<10;i++)
 {
   if(a[i]>a[i+1])
      {
          temp=a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
      }
 }

  }
void search()
 {
 int element;
 cout<<"enter the element u want to search";
 cin>>element;

for(i=0;i<10;i++)
 {
   if(a[i]==element)
   {
    cout<<"element is at"<<i<<"position";
    break;
  }
   else
    {
     cout<<"element not found"<<endl;
    }
 }
}

void display()
{

  cout<<"elements are";
  for(i=0;i<10;i++)
  {
   cout<<a[i]<<endl;
  }
}




void queue()
{
int j;
// int j,a[max],r=-1,f=-1,item,n,i;

//system("clear");
do
{
 cout<<"MENU"<<endl;
 cout<<"1.INSERTION IN QUEUE"<<endl;
 cout<<"2.DELETION IN QUEUE"<<endl;
 cout<<"3.SEARCHING"<<endl;
 cout<<"4.DISPLAY"<<endl;
 cout<<"5.SORTING"<<endl;
 cout<<"6.EXIT"<<endl;
 cout<<"enter your choice";
 cin>>j;

switch(j)
 {
 case 1:
 q_insert();
 break;

 case 2:
 q_del();
 break;

 case 3:
 q_search();
 break;

 case 4:
 q_show();
 break;

 case 5:
 q_sort();
 break;

 case 6:
 exit(0);
 break;

 default:
 cout<<"incorrct choice";
 }
 }while(j<=6);

}



   void q_insert()
 {

  if(r==max-1)
    {
   cout<<"queue is full";
    }
 else
    {
    if(f==-1)
    {
      f=0;
    }
   cout<<"enter the element u want to insert"<<endl;
   cin>>item;
   r++;
   b[r]=item;
    }
   }
void q_del()
  {

 //  int item,fe,re,a[max];
  if(f==-1 || f>r )
  {
cout<<"the queue is empty"<<endl;
  }
 else
  {
  item=b[f];
f++;
 cout<<"element is deleted"<<endl;
  }
  }


void q_show()
{
// int i,fe,re,a[max];
cout<<"the element is"<<endl;
for(i=f;i<=r;i++)
{
cout<<b[i]<<endl;
}
}


void q_search()
 {
//  int element,i,fe,re,a[max];
  cout<<"enter tthe element u want to search";
  cin>>element;
  for(i=f;i<=r;i++)
 {
 if(b[i]==element)
 {
   cout<<"element is present at "<<i<<"position";
   break;
 }
  else
 {
  cout<<"element at position"<<i<<":";
   cout<<"ELEMENT NOT FOUND!"<<endl;
 }
 }
 }


void q_sort()
 {
  int temp;

   cout<<"sorted elements are:";
  for(i=f;i<=r;i++)
 {
          for(int j=i+1;j<=r;j++)
          {
          if(b[i]>b[j])
          {
                  temp=b[i];
                  b[i]=b[j];
                  b[j]=temp;
          }
          }
 }
for(i=f;i<=r;i++)
 {
  cout<<b[i];
 }

}


void cqueue()
{
 int j;
system("clear");
do
{
 cout<<"\n";
 cout<<"1.INSERTION IN QUEUE"<<endl;
 cout<<"2.DELETION IN QUEUE"<<endl;
 cout<<"3.SEARCHING"<<endl;
 cout<<"4.SORTING"<<endl;
 cout<<"5.DISPLAY"<<endl;
 cout<<"6.EXIT"<<endl;
 cout<<"enter your choice";
 cin>>j;

switch(j)
 {
 case 1:
 c_insert();
 break;

 case 2:
 c_del();
 break;

 case 3:
 c_search();
 break;

 case 4:
  c_sort();
 break;

 case 5:
 c_display();
 break;

 case 6:
 exit(0);
 break;

 default:
 cout<<"incorrct choice";
 }
 }while(j<=5);

}


void c_insert()
{
    if(flag==max)
    {
       cout<<"\n queue is full"<<endl;
    }
    else
    {
     if(f==-1)
    {
       f=0;
    }
    cout<<"insert element to be added:";
    r=(r+1)%max;
    cin>>b[r];
    flag++;

    }
}



void c_del()
{
 int temp=0;
if(flag==0)
    {
    cout<<"\n queue is empty";
    }
    else
    {
    b[f]=temp;
    f=(f+1)%max;
    flag--;
    }
}


void c_display()
{
cout<<"elements are"<<endl;
for(i=0;i<max;i++)
{
cout<<b[i]<<endl;
}
}


void c_search()
 {
//  int element,i,fe,re,a[max];
    cout<<"enter tthe element u want to search";
     cin>>element;
         for(i=0;i<=max;i++)
         {
          if(b[i]==element)
           {
            cout<<"element is present at "<<i<<"position";
            break;
           }
           else
           {
          cout<<"element at position"<<i<<":";
           cout<<"ELEMENT NOT FOUND!"<<endl;
           }

         }
           }



void c_sort()
 {
  int temp;

   cout<<"sorted elements are:";
  for(i=0;i<max;i++)
 {
          for(int j=i+1;j<=r;j++)
          {
          if(b[i]>b[j])
          {
                  temp=b[i];
                  b[i]=b[j];
                  b[j]=temp;
          }
          }
 }
for(i=0;i<max;i++)
 {
  cout<<b[i];
 }

}


/*  void dqueue()
{
 int j;
 system("clear");
do
{
 cout<<"INSERTION IN QUEUE"<<endl;
 cout<<"DELETION IN QUEUE"<<endl;
 cout<<"enter your choice";
 cin>>j;

switch(j)
 {
 case 1:
 insert();
 break;

 case 2:
 del();
 break;

 default:
 cout<<"incorect choice";
 }
 }while(j<=2);
 }

void queue_stack()
 {
 }

 */

void stack()
 {

 //a[max],top=-1,i,temp,j;
 system("clear");
 int g;
 do
 {
  cout<<"\n";
  cout<<"MENU"<<endl;
  cout<<"1.INSERTION IN STACK"<<endl;
  cout<<"2.DELETION IN STACK"<<endl;
  cout<<"3.SEARCHING"<<endl;
  cout<<"4.DISPLAY"<<endl;
  cout<<"5.EXIT"<<endl;
  cout<<"enter your choice";
 cin>>g;
 switch(g)
 {
 case 1:
 push();
 break;

 case 2:
 pop();
 break;

 case 3:
 s_search();
 break;

 case 4:
 s_display();
 break;

 case 5:
 exit(0);
 break;

 default:
 cout<<"incorrect choice";
 }
 }while(g<=5);

}
   void push()
  {
  if(top==max-1)
   {
       cout<<"stack is full"<<endl;
   }
    else
 {
     cout<<"enter the elements u want to insert"<<endl;
    top++;
    cin>>b[top];
 }
 }

 void pop()
  {
int temp=0;

  if(top==-1)
{
   cout<<"stack is empty"<<endl;
}
 else
{
 temp=b[top];
top--;

}
}

void s_display()

  {
  for(i=0;i<=top;i++)
  {
cout<<b[i]<<endl;
  }
  }

void s_search()
 {
 int element;
  cout<<"enter tthe element u want to search";
  cin>>element;

for(i=0;i<top;i++)
{
  if(b[i]==element)
  {
   cout<<"element is present at "<<i<<"position"<<"\n";
   break;
  }

  else
  {
   cout<<"at position"<<i+1<<":";
   cout<<"ELEMENT NOT FOUND"<<endl;
  }
}
}






void linklist()
{

 int g,n,i;
   do
   {
  cout<<"MENU"<<endl;
  cout<<"1.insert at end"<<endl;
  cout<<"2.insertion in between"<<endl;
  cout<<"3.insertion at front"<<endl;
  cout<<"4.display"<<endl;
  cout<<"5.delete at end"<<endl;
  cout<<"6.deleter in between"<<endl;
  cout<<"7.delete in front"<<endl;
  cout<<"8.Searching "<<endl;
  cout<<"9.Reverse"<<endl;
  cout<<"10.exit"<<endl;
   cout<<"\n enter your choice"<<endl;
  cin>>g;
   switch(g)
  {
    case 1:
    l_insert_end();
    break;

    case 2:
    l_insert_bet();
    break;


    case 3:
    l_insert_front();
    break;

    case 4:
    l_display();
    break;

    case 5:
    l_del_end();
    break;

    case 6:
    l_del_bet();
    break;

    case 7:
    l_del_front();
    break;

    case 8:
    l_search();
    break;

    case 9:
    l_reverse();
    break;


    case 10:
    exit(0);
    break;

    default:
    cout<<"invalid choice"<<endl;
   }
   }while(g<=10);

}

/*  struct node
{
   int data;
   struct node*next;
};
  struct node*s=NULL;
*/
  void l_insert_end()
  {
      struct node*p;
      p=(struct node*)malloc(sizeof(struct node));
      cout<<"enter the data:";
      cin>>p->data;
      p->next=NULL;
      if(s==NULL)
      {
       s=p;
      }
       else
      {
     node *s1;
     s1=s;
     while(s1->next!=NULL)
      {
        s1=s1->next;
      }
        s1->next=p;
      }
  }

 void l_insert_front()
  {
      struct node*p;
      p=(struct node*)malloc(sizeof(struct node));
      cout<<"enter the data:";
      cin>>p->data;
      p->next=s;
      s=p;
 }

void l_insert_bet()
  {
      struct node*p;
      int i=1,pos;
      p=(struct node*)malloc(sizeof(struct node));
       cout<<"enter the position u want to insert at"<<endl;
      cin>>pos;
      cout<<"enter the data:";
      cin>>p->data;
      p->next=NULL;
      if(s==NULL)
      {
       s=p;
       }
      else
      {
     node *s1,*d;
     s1=s;

     while(s1->next!=NULL && i<pos)
      {
        d=s1;
        s1=s1->next;
        i++;
      }
        p->next=s1;
        d->next=p;
      }
  }



 void l_del_end()
  {

   node *f;
  if(s==NULL)
   {
   cout<<"list is empty";
   }
   else
   {
   if(s->next==NULL)
   {
       f=s;
       s=NULL;
       free(f);
   }
   else
   {
   node*w,*x;
   w=s;
   while(w->next!=NULL)
   {
    x=w;
    w=w->next;
   }
     x->next=NULL;
     free(w);
   }
   }
   }

  void l_del_front()
  {
  node *r;
  if(s==NULL)
   {
   cout<<"list is empty";
   }
   else
   r=s;
  s=s->next;
   free(r);
  r=NULL;

  }




  void l_del_bet()
    {
      int  i=1,pos;
      cout<<"enter the position u want to delete at"<<endl;
      cin>>pos;
      if(s==NULL)
      {
       cout<<"linked list is empty";
      }
       else
        {

           node*p,*s1;
           s1=s;
      while(s1->next!=NULL && i<pos)
      {
         p=s1;
        s1=s1->next;
        i++;
      }
         p->next=s1->next;


         free(s1);
         s1=NULL;
         }
     }


void l_reverse()
  {
          struct node*a,*c,*n;
          a=NULL;
          c=s;
          while(c!=NULL)
               {
                     n=c->next;
                     c->next=a;
                           a=c;
                           c=n;
               }
                           s=a;
 }


void l_search()
{
     int element,j=1;
     cout<<"enter the element to be searched for"<<endl;
     cin>>element;
     struct node*h;
     h=s;
     while(h!=NULL)
     {
     if(element==h->data)
     {
         cout<<"found at"<<j<<endl;
         break;

     }
      else
         {
          h=h->next;
         }
          j++;
     }

}




 void l_display()
   {
   struct node*k;
   k=s;
   cout<<"list is:";
   while(k!=NULL)
   {
     cout<<" "<<k->data;
     k=k->next;
   }
   cout<<"\n";
   }



  void clist()
 {
  int g;
do
 {
  cout<<"CICRCULAR LINKED LIST"<<endl;
  cout<<"1.INSERTION AT END"<<endl;
  cout<<"2.INSERTION AT FRONT"<<endl;
  cout<<"3.INSERTION IN BETWEEN"<<endl;
  cout<<"4.DELETION AT END"<<endl;
  cout<<"5.DELETION AT FRONT"<<endl;
  cout<<"6.DELETION IN BETWEEN"<<endl;
  cout<<"7.DISPLAY"<<endl;
  cout<<"ENTER YOUR CHOICE"<<endl;
  cin>>g;

switch(g)
 {
 case 1:
 c_insert_end();
 break;

 case 2:
 c_insert_front();
 break;

 case 3:
 c_insert_bet();
 break;

 case 4:
 c_del_end();
 break;

 case 5:
 c_del_front();
 break;

 case 6:
 c_del_bet();
 break;

 case 7:
 cl_display();
 break;

 case 8:
 exit(0);
 break;

 default:
 cout<<"incorrect choice";
 }
 }while(g<=8);

}

 /* struct node
{
   int data;
   struct node*next;
};

  struct node*s=NULL;
*/
  void c_insert_end()
  {
      struct node*p;
      p=(struct node*)malloc(sizeof(struct node));
      cout<<"enter the data:";
      cin>>p->data;
      p->next=NULL;
       if(s==NULL)
      {
       s=p;
       p->next=s;
      }
       else
      {
       node *s1;
       s1=s;
       while(s1->next!=s)
      {
        s1=s1->next;
      }
        s1->next=p;
        p->next=s;
      }
  }


void c_insert_front()
{
      struct node*p;
      p=(struct node*)malloc(sizeof(struct node));
      cout<<"enter the data:";
      cin>>p->data;
      p->next=NULL;
      if(s==NULL)
     {
      cout<<"list is empty";
      p=s;
     }
     else
     {
     struct node*s1;
     s1=s;

     while(s1->next!=s)
      {
       s1=s1->next;
      }
       s1->next=p;
       p->next=s;
       s=p;
     }
}


void c_insert_bet()
  {
      struct node*p;
      int i=1,pos;
      p=(struct node*)malloc(sizeof(struct node));
      cout<<"enter the position u want to insert at"<<endl;
      cin>>pos;
      cout<<"enter the data:";
      cin>>p->data;
      p->next=NULL;
      if(s==NULL)
      {
       s=p;
      }
       else
      {
      node *s1,*d;
      s1=s;
      while(s1->next!=NULL && i<pos)
     {
      d=s1;
      s1=s1->next;
      i++;
      }
      p->next=s1;
      d->next=p;
      }
}


void c_del_front()
  {
   node *s1,*temp;
  if(s==NULL)
   {
   cout<<"list is empty";
   }
   else
   {

    s1=s;
    temp=s;
    while(s1->next!=s)
 {
    s1=s1->next;
 }
    s1->next=s->next;
    s=s->next;
    free(temp);
    temp=NULL;
   }
  }


void c_del_end()
  {
   node *f;
   if(s==NULL)
   {
   cout<<"list is empty";
   }
   else
   {
   struct node *s1,*p;
   s1=s;
   while(s1->next!=s)
   {
   p=s1;
   s1=s1->next;
   }
   p->next=s;
   free(s1);
   s1=NULL;
   }
   }



 void c_del_bet()
     {
     int i=1,pos;
     struct node*p;
     cout<<"enter the position u want to delete at"<<endl;
     cin>>pos;
     if(s==NULL)
     {
     cout<<"linked list is empty";
     p=s;
     }
     else
     {
      struct node*s1;
      s1=s;
      while(s1->next!=s && i<pos)
      {
      p=s1;
      s1=s1->next;
      i++;
      }
      p->next=s1->next;
      free(s1);
      s1=NULL;
      }
      }


void cl_display()
   {
   struct node*k;
   k=s;
        cout<<"linked list - ";
   cout<<k->data;
   k=k->next;
   cout<<"list is:";
   while(k!=s)
   {
   cout<<" "<<k->data;
      k=k->next;
    //start=start->next;
    }
    cout<<"\n";
    }


  void dlist()
{
system("clear");
int g;
do
{
  cout<<"DOUBLY LINKED LIST"<<endl;
  cout<<"1.INSERTION AT END"<<endl;
  cout<<"2.INSERTION AT FRONT"<<endl;
  cout<<"3.INSERTION IN BETWEEN"<<endl;
  cout<<"4.DELETION AT END"<<endl;
  cout<<"5.DELETION AT FRONT"<<endl;
  cout<<"6.DELETION IN BETWEEN"<<endl;
  cout<<"7.DISPLAY"<<endl;
  cout<<"8.EXIT"<<endl;
  cout<<"ENTER YOUR CHOICE"<<endl;
  cin>>g;

switch(g)
 {
 case 1:
 d_insert_end();
 break;

 case 2:
 d_insert_front();
 break;

 case 3:
 d_insert_bet();
 break;

 case 4:
 d_del_end();
 break;

 case 5:
 d_del_front();
 break;

 case 6:
 d_del_bet();
 break;

 case 7:
 d_display();
 break;

 case 8:
 exit(0);
 break;

 default:
 cout<<"incorrect choice";
 }
 }while(g<=8);

}

/*
  struct dll
{
   int data;
   struct dll *next;
   struct dll *prev;
};
  struct dll *s=NULL;

*/
void d_insert_end()
{
  struct  node *p;
  p=(struct node*)malloc(sizeof(struct node));
  cout<<"enter the data:";
  cin>>p->data;
  p->next=NULL;
  p->prev=NULL;

if(s==NULL)
{
  cout<<"list is empty";
  s=p;
}
else
{
 struct node *s1;
 s1=s;
 while(s1->next!=NULL)
 {
  s1=s1->next;
 }
  s1->next=p;
  p->prev=s1;
}
}

  void d_insert_front()
{
 struct node *p;
 p=(struct node*)malloc(sizeof(struct node));
 cout<<"enter the data:";
 cin>>p->data;
 p->next=s;
 s->prev=p;
 s=p;
}



  void d_insert_bet()
{
  int i=1,pos;
  struct node *p;
  p=(struct node*)malloc(sizeof(struct node));
  cout<<"enter the position u want to insert";
  cin>>pos;
  cout<<"enter the data:";
  cin>>p->data;
  if(s==NULL)
{
  cout<<"list is empty";
  s=p;
}
else
 {
 struct node *s1,*d;
 s1=s;
 while(s1->next!=NULL && i<pos)
 {
  d=s1;
  s1=s1->next;
  i++;
 }
 d->next=p;
 p->prev=d;
 p->next=s1;
 s1->prev=p;
  }
}

void d_del_end()
{
struct node *s1,*p;
 if(s==NULL)
 {
  cout<<"list is empty";
  s=p;
 }
 else
 {
  s1=s;
 while(s1->next!=NULL)
 {
  s1=s1->next;
 }
 s1->prev->next=NULL;
 free(s1);
 s1=NULL;
 }
  }

void d_del_front()
 {
  cout<<"YES";
  struct node *s1;
  s1=s;
  s1->next->prev=NULL;
  s=s1->next;
  free(s1);
  s1=NULL;
  }

void d_del_bet()
 {
 struct node *s1,*p;
 int pos,i=1;
 cout<<"ënter the position u wwant to delete";
 cin>>pos;
 if(s==NULL)
 {
 cout<<"list is  empty";
 s=p;
 }
 else
 {
 s1=s;
 while(s1->next!=NULL && i<pos)
 {
  s1=s1->next;
  i++;
 }

 s1->next->prev=s1->prev;
 s1->prev->next=s1->next;
 free(s1);
 s1=NULL;
 }
 }

 void d_display()
  {
struct node *d;
d=s;
while(d!=NULL)
  {
cout<<" "<<d->data;
d=d->next;
  }
cout<<"\n";
  }


void eva_post()
{
     system("clear");

        char ch[100];
        int arr[100],x,a,b;

        cout<<"enter the expression"<<endl;
        cin>>ch;
        for(i=0;ch[i]!='\0';i++)
        {
        if(ch[i]>='0' && ch[i]<='9'&& ch[i]!=',')
        {
                top++;
                arr[top]=ch[i]-48;
        }
        else if(ch[i]=='+')
        {
        arr[top-1]=arr[top-1]+arr[top];
        top--;
        }
          else if(ch[i]=='-')
        {
        arr[top-1]=arr[top-1]-arr[top];
        top--;
         }
         else if(ch[i]=='*')
        {
         arr[top-1]=arr[top-1]*arr[top];
        top--;
        }
         else if(ch[i]=='/')
        {
         arr[top-1]=arr[top-1]/arr[top];
        top--;
        }
         else if(ch[i]=='^')
        {
        arr[top-1]=pow(arr[top-1],arr[top]);
        top--;
        }
        }
 cout<<"ans ="<<arr[top];
}


void bst()
{
  system("clear");
 int g;
 do
{
 cout<<"\n\n\n\n";
 cout<<"         BINARY SEARCH TREE         "<<endl;
 cout<<"1.INSERTION IN TREE"<<endl;
 cout<<"2.INORDER TRAVERSAL"<<endl;
 cout<<"3.PREORDER TRAVERSAL"<<endl;
 cout<<"4.POSTORDER TRAVERSAL"<<endl;
 cout<<"5.MAXIMUM ELEMENT IN BST"<<endl;
 cout<<"6.MINIMUM ELEMENT IN BST"<<endl;
 cout<<"7.DELETION OF NODE"<<endl;
 cout<<"8.EXIT"<<endl;
 cout<<"enter your choice"<<endl;
 cin>>g;

switch(g)
 {
 case 1:
 bst_insert();
 break;

 case 2:
 inorder(s);
 break;

 case 3:
 preorder(s);
 break;

 case 4:
 postorder(s);
 break;

 case 5:
 bst_max(s);
 break;

 case 6:
 bst_min(s);
 break;

 case 7:
 bst_del(s);
 break;

 case 8:
 exit(0);
 break;

 default:
 cout<<"incorrect choice"<<endl;
 }
 }while(g<=8);

}

  /*struct tree
  {
  int data;
  struct tree*left;
  struct tree*right;
  };
  struct node *root=NULL;
  */
  void bst_insert()
  {
  struct node *p;
  p=(struct node *)malloc(sizeof(struct node));
  cout<<"enter the data";
  cin>>p->data;
  p->left=NULL;
  p->right=NULL;
  if(s==NULL)
  {
  s=p;
  }
  else
  {
  struct node *curr,*parent;
  curr=s;
  while(curr)
  {
  parent=curr;
  if(p->data > curr->data)
  {
  curr=curr->right;
  }
  else
  {
  curr=curr->left;
  }
  }

  if(p->data > parent->data)
  {
    parent->right=p;
  }
  else
  {
   parent->left=p;
  }
  }
}

void preorder(node *s)
{
   if(s==NULL)
    return;
    cout<<" "<<s->data;
    preorder(s->left);
    preorder(s->right);
}

void inorder(node *s)
{
     if(s==NULL)
     return;
     inorder(s->left);
     cout<<" "<<s->data;
      inorder(s->right);
}

 void postorder(node *s)
{
    if(s==NULL)
     return;
     postorder(s->left);
     postorder(s->right);
     cout<<" "<<s->data;
}
struct node *bst_min(node *s)
{
   struct node *current;
   current=s;
//loop down to find leftmoost leaf
  while(current && current->left!=NULL)
  current=current->left;
  cout<<current->data;
   return current;
}

struct node *bst_max(node *s)
{
    struct node *current;
    current=s;
    //loop down to find leftmoost leaf
    while(current && current->right!=NULL)
    current=current->right;
    cout<<current->data;
    return current;
}


void bst_del(node *s)
{
  int k;
  struct node *curr,*parent,*w;
  cout<<"enter the element u want to delete";
  cin>>k;
  curr=s;
  if(s==NULL)
{
  cout<<"tree is empty";
  return;
}
 while(curr!=NULL)
{
  if(k==curr->data)
  break;
  parent=curr;
//traversing
  if(k > curr->data)
   curr=curr->right;
  else
   curr=curr->left;
}

//for 0 child

 if(curr->right==NULL && curr->left==NULL)
  {
 if(parent->left==curr)
  {
   parent->left=NULL;
   free(curr);
   curr=NULL;
  }
 else
  {
   parent->right=NULL;
   free(curr);
   curr=NULL;
  }
  }



//for two child
else if(curr->left!=NULL && curr->right!=NULL)
    {
    parent=curr;
    parent=parent->left;

  if(parent->right==NULL)
    {
    curr->data=parent->data;
    curr->left=parent->left;
    free(parent);
    parent=NULL;
    }
  else
    {
   while(parent->right!=NULL)
    {
     w=parent;
     parent=parent->right;
    }
    curr->data=parent->data;
    w->right=NULL;
    free(parent);
    parent=NULL;
    }
    }

//for 1 child

 else
   {
  if(curr->right!=NULL)
   {
    if(curr=parent->left)
   {
   parent->left=curr->right;
   free(curr);
   curr=NULL;
   }
  else//(curr==parent->right)
   {
   parent->right=curr->right;
   free(curr);
   curr=NULL;
   }
   }
  else
   //(curr->left!=NULL)
   {
    if(curr==parent->left)
   {
    parent->left=curr->left;
    delete curr;
    curr=NULL;
   }
  else//(curr==parent->right)
   {
    parent->right=curr->left;
    free(curr);
    curr=NULL;
   }
   }
   }
   cout<<"ELEMENT DELTED SUCCESSFULLY!"<<endl;
}


};
 int main()
 {
 class pro p;
int g,h;
 do
 {
 cout<<"\n";
 cout<<"MENU"<<endl;

 cout<<"1.ARRAY"<<endl;

 cout<<"2.SIMPLE QUEUE"<<endl;

 cout<<"3.CIRCULAR QUEUE"<<endl;

 cout<<"4.STACK"<<endl;

 cout<<"5.EVALUATION OF STACK"<<endl;

 cout<<"6.LINKED LIST"<<endl;

 cout<<"7. CIRCULAR LINKED LIST"<<endl;

 cout<<"8.DOUBLE LINKED LIST"<<endl;

 cout<<"9.IMPLEMENTATION OF BINARY SEARCH TREE"<<endl;

 cout<<"10.EXIT"<<endl;
// delay(500);
 cout<<"enter your choice"<<endl;
 cin>>g;



switch(g)
{
  case 1:
  p.array();
  break;

  case 2:
  p.queue();
  break;

  case 3:
  p.cqueue();
  break;


  case 4:
  p.stack();
  break;


 case 5:
  p.eva_post();
  break;

  case 6:
  p.linklist();
  break;

  case 7:
  p.clist();
  break;

  case 8:
  p.dlist();
   break;


   case 9:
  p.bst();
  break;

  case 10:
  exit(0);
  break;

  default:
  cout<<"incorrect choice";
 }
 }while(g<=10);
 return 0;
 }

