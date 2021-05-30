#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class score{
  public:
  int score;
  void display()
  {
    cout<<score;
  }
};

int main()
{
int x,l;
char cho;
char choice='y';
cout<<"Enter number of players ";
cin>>x;
string name[x];
for (int i=0;i<x;i++)
{
  cout<<"Enter the name for player "<<i+1<<"\t";
  cin>>name[i];
}
a:      //goto statemnt
cout<<"MAIN MENU"<<"\n"<<"Press F to Quit"<<"\n"<<"Do you want computer generated Truths and Dares?";
cin>>cho;
switch(cho)
{
case 'f':goto b;
     break;
case 'y':
{
while(choice=='y')
{
char ch;
string truth[100]{"Have you ever had a run in with the law?","What's your worst habit?","What's the worst thing you've ever said to anyone?","Have you ever peed in the shower?","What's the strangest dream you've had?","Have you ever been caught doing something you shouldn't have?","What's the worst date you've been on?","What's your biggest regret?","What's the biggest misconception about you?","Why did your last relationship break down?","Have you ever lied to get out of a bad date?","What's the most trouble you've been in?"};
string dare[100]{"Wave a stranger on the road.","Sing like an Oprah singer.","Pick nose in public.","Go outside and sing the national anthem loudly.","Mimic your favorite Disney character.","Call your crush to confess your love.","Kiss the bottom of your friend’s shoe.","Go live on Facebook and tell people a silly joke.","Eat a chunk of paper.","Eat a spoonful of a pickle.","Hug a tree and kiss its leaves.","Ask your neighbor for a cup of coffee.","Try to make a sound like a hungry dog.","Suck your thumb for fifteen minutes.","Call your mom and tell her how much you love smoking cigarettes.","Let people throw eggs on your face.","Call your dad and tell him you have a boyfriend/girlfriend."};
srand(time(0));
int counter=0,temp=-1;
for(int i=0;i<x;i++)
{
l=rand()%x;                      
    cout<<"For "<<name[l]<<"\n";
    cout<<"Truth oor Dare ";
    cin>>ch;
    switch(ch)
    {
    case 't':
    {
    cout<<"\t The truth to be told is-> "<<truth[rand()%12]<<"\n";
    counter++;
    break;
    }
    case 'd':
    {
    //cout<<"temp="<<temp<<"\t"<<"l vlaue ="<<l;
    cout<<"\t The dare is->"<<dare[rand()%17]<<"\n";
    counter++;
    break;
    }
    default:
    {
    goto a;
    }
    }
    cout<<"To exit this mode press any key "<<"\n";
if(counter==1)
break;
cout<<"\n"<<"For next round press Y and hit enter ";
cin>>choice;
}}


default:
while(choice=='y')
{
srand(time(0));
int counter=0,temp=-1;
for(int i=0;i<x;i++)
{
l=rand()%x;                    /*storing random value in l,so printing array block is lessmessy*/
if(l==temp)                     /*temp is initially -1 so that first random number can be compared and stored in temp*/
   { continue;
    counter--;           /*had to include this counter-- because when temp==l the code skipped it but counter value incresed,giving only a single output in some cases*/
   }
else{
    switch(counter)
    {case 0:
    cout<<"Questioner ->"<<name[l]<<"\n";
    //cout<<"temp="<<temp<<"\t"<<"l vlaue ="<<l;
    temp=l; 
    counter++;
    break;
    case 1:
    cout<<"Answerer ->"<<name[l]<<"\n";
    //cout<<"temp="<<temp<<"\t"<<"l vlaue ="<<l;
    temp=l; 
    counter++;
    break;
    }
    
   }    
if(counter==2)
break;
}
cout<<"\n"<<"To exit this mode press any key"<<"\n"<<"For next round press Y and hit enter or  ";
cin>>choice;
}
goto a;
}
b:
return 0;
}
}