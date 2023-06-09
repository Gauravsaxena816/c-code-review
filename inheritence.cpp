#include<iostream>
#include<cstring>
#include<cstdio>
#include <winsock.h>
//#include <mysql.h>
using namespace std;


//Class base contain all the sub-classes Related to Performance.
class base{
public:
    class Tires{
      string name_t;
      int sum;
    public:
      void get_t(int x){
          switch(x){
          case 1:
              name_t="Sports Tyres";
              sum=200;
              break;
          case 2:
              name_t="High Speed Tyres";
              sum=400;
              break;
          case 3:
              name_t="Stock Tyres";
              sum=600;
              break;
          }
      }
      int sum_dis_t(){
         return sum;
      }
      void per_dis_sub_t(){
          cout<<"||\t\t\tYour Selected Tyre is "<<name_t<<endl;
     }
    };



    class Nitro{
      string name_n;
      int sum;
    public:
      void get_n(int x){
          switch(x){
          case 1:
              name_n="Pro";
              sum=149;
              break;
          case 2:
              name_n="Super Pro";
              sum=179;
              break;
          case 3:
              name_n="Ultimate Pro";
              sum=229;
              break;
          }
      }
      int sum_dis_n(){
          return sum;
      }
      void per_dis_sub_n(){
          cout<<"||\t\t\tYour Selected Nitro are of "<<name_n<<" Type.\t\t\t||"<<endl;
     }
    };



    class Suspension{
      string name_sus;
      int sum;
    public:
      void get_sus(int x){
          switch(x){
          case 1:
              name_sus="Multi-Link Suspension";
              sum=145;
              break;
          case 2:
              name_sus="Rigid Suspension";
              sum=155;
              break;
          case 3:
              name_sus="Air Suspension";
              sum=185;
              break;
          }
      }
      int sum_dis_sus(){
          return sum;
      }
      void per_dis_sub_sus(){
          cout<<"||\t\t\tYour Selected Suspension is "<<name_sus<<endl;
     }
    };



    class Transmission{
      string name_trans;
      int sum;
    public:
      void get_trans(int x){
          switch(x){
          case 1:
              name_trans="Pro";
              sum=199;
              break;
          case 2:
              name_trans="Super Pro";
              sum=299;
              break;
          case 3:
              name_trans="Ultimate Pro";
              sum=399;
              break;
          }
      }
      int sum_dis_trans(){
          return sum;
      }
      void per_dis_sub_trans(){
          cout<<"||\t\t\tYour Selected Transmission are of "<<name_trans<<" Type.\t\t||"<<endl;
     }
    };
    class Engine{
       string name_engg;
       int sum;
    public:
       void get_engg(int x){
          switch(x){
          case 1:
              name_engg="Radial Engine";
              sum=23999;
              break;
          case 2:
              name_engg="Rotary Engine";
              sum=25999;
              break;
          case 3:
              name_engg="Diesel Engine";
              sum=59999;
              break;
          }
       }
       int sum_dis_engg(){
           return sum;
       }
       void per_dis_sub_engg(){
          cout<<"||\t\t\tYour Selected Engine are of "<<name_engg<<" Type.\t\t\t||"<<endl;
     }
    };
};



//Abstract classes From Here.
template <class T>void thank_you(T a){
    cout<<"\t\t\t\tTHANK YOU FOR CHOOSING US !!";
    cout<<"\nDate:"<<a<<"/05/2023.";
}

class vinyls{
    int sum_vinyl;
    string vinyl;
    int last;
    string vinyl_color;
public:
    int ch;
    virtual void imag()=0;
    void get_vinyls(int a,string str,int b,string z){
        sum_vinyl=a;
        vinyl=str;
        last=b;
        vinyl_color=z;
    }
    void str_display_vinyls(){
        if(last!=0){
           cout<<"||\t\t\tYour Selected Vinyl is "<<vinyl<<" "<<last<<" of color "<<vinyl_color<<"\t\t||"<<endl;
        }
        else{
           cout<<"||\t\t\tYour Selected Vinyl is "<<vinyl<<" of color "<<vinyl_color<<"\t\t||"<<endl;
        }
    }
    void Display_vinyls(){
        cout<<"\n\t\t\tAvailable Vinyls:\n";
        cout<<"\t\t\t\t1.Flame."<<endl;
        cout<<"\t\t\t\t2.Tribal."<<endl;
        cout<<"\t\t\t\t3.Race Flag."<<endl;
        cout<<"\t\t\t\t4.Stripe."<<endl;
        cout<<"\t\t\tEnter your choice:";
        cin>>ch;
        if(ch==1){
            cout<<"\n\t\t\t\tAvailable Flames:"<<endl;
            cout<<"\t\t\t\t\t1.Flame 1.($499)"<<endl;
            cout<<"\t\t\t\t\t2.Flame 2.($599)"<<endl;
            cout<<"\t\t\t\t\t3.Flame 3.($699)"<<endl;
        }
        if(ch==2){
            cout<<"\n\t\t\t\tAvailable Tribal:"<<endl;
            cout<<"\t\t\t\t\t1.Tribal 1($399)."<<endl;
            cout<<"\t\t\t\t\t2.Tribal 2($599)."<<endl;
            cout<<"\t\t\t\t\t3.Tribal 3($799)."<<endl;
        }
        if(ch==4){
            cout<<"\n\t\t\t\tAvailable Stripe:"<<endl;
            cout<<"\t\t\t\t\t1.Stripe 1($399)."<<endl;
            cout<<"\t\t\t\t\t2.Stripe 2($599)."<<endl;
            cout<<"\t\t\t\t\t3.Stripe 3($799)."<<endl;
        }
        if(ch>4){
            cout<<"\t\t\tIncorrect choice."<<endl;
            cout<<"\t\t\tVehicle unable to be finished."<<endl;
            exit(0);
        }
    }
    int sum_vinyls(){
        return sum_vinyl;
    }
};



class Body_Kits{
    int sum;
    string name;
public:
    virtual void imag()=0;
    void get_bodykits(int a,string str){
        sum=a;
        name=str;
    }
    void display_bodykits(){
        cout<<"\n\t\t1.For Body Kits:=\n";
        cout<<"\n\t\t\tAvailable Body Kits:\n";
        cout<<"\t\t\t\t1.Stock($1499)"<<endl;
        cout<<"\t\t\t\t2.SUV($1799)"<<endl;
        cout<<"\t\t\t\t3.Super Car($4999)"<<endl;
        cout<<"\t\t\t\t4.Electric($2599)"<<endl;
    }
    int sum_bodykits(){
        return sum;
    }
    void str_display_bodykits(){
        cout<<"||\t\t\tYour Selected Body Kit is "<<name<<"\t\t\t\t||"<<endl;
    }
};



class Spoilers{
    int sum;
    string name;
public:
    virtual void imag()=0;
    void get_spoilers(int a,string str){
        sum=a;
        name=str;
    }
    void display_spoilers(){
        cout<<"\n\t\t2.For Spoilers:=\n";
        cout<<"\n\t\t\tAvailable Spoilers:\n";
        cout<<"\t\t\t\t1.Viper.($1459)"<<endl;
        cout<<"\t\t\t\t2.Ripper.($1559)"<<endl;
        cout<<"\t\t\t\t3.Banshee.($1659)"<<endl;
    }
    int sum_spoilers(){
        return sum;
    }
    void str_display_spoilers(){
        cout<<"||\t\t\tYour Selected Spoilers is "<<name<<"\t\t\t\t||"<<endl;
    }
};



class Rims{
    int sum;
    string name;
public:
    virtual void imag()=0;
    void get_rims(int a,string str){
        sum=a;
        name=str;
    }
    void display_rims(){
        cout<<"\n\t\t3.For Rims:=\n";
        cout<<"\n\t\t\tAvailable Rims:\n";
        cout<<"\t\t\t\t1.O.Z.($450)"<<endl;
        cout<<"\t\t\t\t2.Volk.($550)"<<endl;
        cout<<"\t\t\t\t3.RO_JA.($650)"<<endl;
        cout<<"\t\t\t\t4.RacingHeart.($750)"<<endl;
    }
    int sum_rims(){
        return sum;
    }
    void str_display_rims(){
        cout<<"||\t\t\tYour Selected Rims is "<<name<<"\t\t\t\t||"<<endl;
    }
};



class Hood{
    int sum;
    string name;
public:
    virtual void imag()=0;
    void get_hoods(int a,string str){
        sum=a;
        name=str;
    }
    void display_hoods(){
        cout<<"\n\t\t4.For Hood:=\n";
        cout<<"\n\t\t\tAvailable Hoods:\n";
        cout<<"\t\t\t\t1.Stock.($1550)"<<endl;
        cout<<"\t\t\t\t2.Overdial.($1650)"<<endl;
        cout<<"\t\t\t\t3.Trident.($1750)"<<endl;
        cout<<"\t\t\t\t4.Fusion.($1850)"<<endl;
        cout<<"\t\t\t\t5.Colix.($1950)"<<endl;
    }
    int sum_hoods(){
        return sum;
    }
    void str_display_Hood(){
        cout<<"||\t\t\tYour Selected Hood is "<<name<<"\t\t\t\t||"<<endl;
    }
};



//Car Different fundamentals (Derived class).
class Performance:public base{
    int sum_total_per;
    base::Engine e;
    base::Nitro n;
    base::Suspension s;
    base::Tires t;
    base::Transmission tr;
public:
    int total_per(){
        sum_total_per=((e.sum_dis_engg())+(n.sum_dis_n())+(s.sum_dis_sus())+(t.sum_dis_t())+(tr.sum_dis_trans()));
        return sum_total_per;
    }
    void Display_per();
    void Display_sub_parts(){
        e.per_dis_sub_engg();
        n.per_dis_sub_n();
        s.per_dis_sub_sus();
        t.per_dis_sub_t();
        tr.per_dis_sub_trans();
    }
};



void Performance::Display_per(){
    int ch;
    cout<<"\n\t\t\tAvailable Performance Parts:"<<endl;
    cout<<"\t\t\t\t1.Engine."<<endl;
    cout<<"\t\t\t\t2.Transmission."<<endl;
    cout<<"\t\t\t\t3.Suspension."<<endl;
    cout<<"\t\t\t\t4.Nitros."<<endl;
    cout<<"\t\t\t\t5.Tires."<<endl;
    cout<<"\n";
    cout<<"\t\t\tPut Choice from 1 to 3 accordingly:"<<endl;
    cout<<"\t\t\t\tEngine:\n";
    cout<<"\t\t\t\t1.Radial Engine\n\t\t\t\t2.Rotary Engine\n\t\t\t\t3.Diesel Engine\n";
    cout<<"\t\t\t\tEnter your choice:";
    cin>>ch;
    if(ch>3){
        cout<<"\t\t\tIncorrect choice."<<endl;
        cout<<"\t\t\tVehicle unable to be finished."<<endl;
        exit(0);
    }
    else{
        e.get_engg(ch);
    }
    cout<<"\n\t\t\t\tTransmission:\n";
    cout<<"\t\t\t\t1.Pro\n\t\t\t\t2.Super Pro\n\t\t\t\t3.Ultimate Pro\n";
    cout<<"\t\t\t\tEnter your choice:";
    cin>>ch;
    if(ch>3){
        cout<<"\t\t\tIncorrect choice."<<endl;
        cout<<"\t\t\tVehicle unable to be finished."<<endl;
        exit(0);
    }
    else{
        tr.get_trans(ch);
    }
    cout<<"\n\t\t\t\tSuspension:\n";
    cout<<"\t\t\t\t1.Multi-Link Suspension\n\t\t\t\t2.Rigid Suspension\n\t\t\t\t3.Air Suspension \n";
    cout<<"\t\t\t\tEnter your choice:";
    cin>>ch;
    if(ch>3){
        cout<<"\t\t\tIncorrect choice."<<endl;
        cout<<"\t\t\tVehicle unable to be finished."<<endl;
        exit(0);
    }
    else{
        s.get_sus(ch);
    }
    cout<<"\n\t\t\t\tNitros:\n";
    cout<<"\t\t\t\t1.Pro\n\t\t\t\t2.Super Pro\n\t\t\t\t3.Ultimate Pro\n";
    cout<<"\t\t\t\tEnter your choice:";
    cin>>ch;
    if(ch>3){
        cout<<"\t\t\tIncorrect choice."<<endl;
        cout<<"\t\t\tVehicle unable to be finished."<<endl;
        exit(0);
    }
    else{
        n.get_n(ch);
    }
    cout<<"\n\t\t\t\tTyres:\n";
    cout<<"\t\t\t\t1.Sports-Tyres\n\t\t\t\t2.High Speed Tyres\n\t\t\t\t3.Stock Tyres\n";
    cout<<"\t\t\t\tEnter your choice:";
    cin>>ch;
    if(ch>3){
        cout<<"\t\t\tIncorrect choice."<<endl;
        cout<<"\t\t\tVehicle unable to be finished."<<endl;
        exit(0);
    }
    else{
        t.get_t(ch);
    }
    cout<<"\n";
    cout<<"--------------------------------------------------------------------------------------------------------------------\n";
}



//--------------------------------------------------------------------------------------------------------------------------------
class Parts:public Body_Kits,public Spoilers,public Rims,public Hood{
    int parts_sum;
public:
    virtual void imag(){
        cout<<"Data Storage made."<<endl;
    }
    void Display();
    int cost_parts(){
        int x=(Body_Kits::sum_bodykits())+(Spoilers::sum_spoilers())+(Rims::sum_rims())+(Hood::sum_hoods());
        parts_sum=x;
        return x;
    }
};



void Parts::Display(){
    int ch;
        cout<<"\n\t\t\tAvailable Parts:"<<endl;
        cout<<"\t\t\t\t1.Body Kits."<<endl;
        cout<<"\t\t\t\t2.Spoilers."<<endl;
        cout<<"\t\t\t\t3.Rims."<<endl;
        cout<<"\t\t\t\t4.Hoods."<<endl;
        cout<<"\n";
        Body_Kits::display_bodykits();
        cout<<"\t\t\t\tEnter your choice:";
        cin>>ch;
        switch(ch){
        case 1:
            Body_Kits::get_bodykits(1000,"Stock");
            break;
        case 2:
            Body_Kits::get_bodykits(2000,"SUV");
            break;
        case 3:
            Body_Kits::get_bodykits(2050,"Super Car");
            break;
        case 4:
            Body_Kits::get_bodykits(2099,"Electric");
            break;
        default:
            cout<<"\t\t\tIncorrect choice."<<endl;
            cout<<"\t\t\tVehicle unable to be finished."<<endl;
            exit(0);
            break;
        }
        cout<<"\n";
        Spoilers::display_spoilers();
        cout<<"\t\t\t\tEnter your choice:";
        cin>>ch;
        switch(ch){
        case 1:
            Spoilers::get_spoilers(1450,"Viper");
            break;
        case 2:
            Spoilers::get_spoilers(1550,"Ripper");
            break;
        case 3:
            Spoilers::get_spoilers(1650,"Banshee");
            break;
        default:
            cout<<"\t\t\tIncorrect choice."<<endl;
            cout<<"\t\t\tVehicle unable to be finished."<<endl;
            exit(0);
            break;
        }
        cout<<"\n";
        Rims::display_rims();
        cout<<"\t\t\t\tEnter your choice:";
        cin>>ch;
        switch(ch){
        case 1:
            Rims::get_rims(450,"O.Z");
            break;
        case 2:
            Rims::get_rims(550,"Volk");
            break;
        case 3:
            Rims::get_rims(650,"RO_JA");
            break;
        case 4:
            Rims::get_rims(750,"Racing Hart");
            break;
        default:
            cout<<"\t\t\tIncorrect choice."<<endl;
            cout<<"\t\t\tVehicle unable to be finished."<<endl;
            exit(0);
            break;
        }
        cout<<"\n";
        Hood::display_hoods();
        cout<<"\t\t\t\tEnter your choice:";
        cin>>ch;
        switch(ch){
        case 1:
            Hood::get_hoods(1550,"Stock");
            break;
        case 2:
            Hood::get_hoods(1650,"Overdial");
            break;
        case 3:
            Hood::get_hoods(1750,"Trident");
            break;
        case 4:
            Hood::get_hoods(1850,"Fusion");
            break;
        case 5:
            Hood::get_hoods(1950,"Colix");
            break;
        default:
            cout<<"\t\t\tIncorrect choice."<<endl;
            cout<<"\t\t\tVehicle unable to be finished."<<endl;
            exit(0);
            break;
        }
        cout<<"\n";
}




//--------------------------------------------------------------------------------------------------------------------------------
class visual:public vinyls{
    string paint;
    string rim_paint;
    string win_tint;
public:
    virtual void imag(){
        cout<<"Data Storage made."<<endl;
    }
    void Display_visual();
    int sum_total_visual(){
        return(20+30+(vinyls::sum_vinyls())+80);
    }
    void parts_dis(){
        cout<<"||\t\t\tYour Selected Paint is "<<paint<<"\t\t\t\t||"<<endl;
        cout<<"||\t\t\tYour Selected Rim Paint is "<<rim_paint<<"\t\t\t\t||"<<endl;
        cout<<"||\t\t\tYour Selected Window Tint is "<<win_tint<<"\t\t\t\t||"<<endl;
    }
};



void visual::Display_visual(){
    int ch1;
    cout<<"\n\t\t\tAvailable Visuals:"<<endl;
    cout<<"\t\t\t\t1.Car Paint."<<endl;
    cout<<"\t\t\t\t2.Rim Paint."<<endl;
    cout<<"\t\t\t\t3.Vinyls."<<endl;
    cout<<"\t\t\t\t4.Window Tint.\n"<<endl;
    fflush(stdin);
    cout<<"\t\t\tEnter Car Paint:";
    getline(cin,paint);
    cout<<"\t\t\tEnter Rim Paint(write same color if same as car paint):";
    getline(cin,rim_paint);
    cout<<"\t\t\tEnter Window Tint color:";
    getline(cin,win_tint);
    string z;
    cout<<"\t\t\tEnter Vinyls Color:";
    getline(cin,z);
    cout<<"\n\t\t\tDisplaying Vinyls:"<<endl;
    vinyls::Display_vinyls();
    if(vinyls::ch==3){
        ch1==3;
    }
    else{
        cout<<"\t\t\t\t\tEnter your choice:";
        cin>>ch1;
    }
    if(vinyls::ch==2){
      switch(ch1){
        case 1:
            vinyls::get_vinyls(250,"Tribal",1,z);
            break;
        case 2:
            vinyls::get_vinyls(300,"Tribal",2,z);
            break;
        case 3:
            vinyls::get_vinyls(350,"Tribal",3,z);
            break;
        default:
            cout<<"\t\t\tIncorrect choice."<<endl;
            cout<<"\t\t\tVehicle unable to be finished."<<endl;
            exit(0);
            break;
      }
    }
    else if(vinyls::ch==1){
        switch(ch1){
        case 1:
            vinyls::get_vinyls(350,"Flame",1,z);
            break;
        case 2:
            vinyls::get_vinyls(400,"Flame",2,z);
            break;
        case 3:
            vinyls::get_vinyls(450,"Flame",3,z);
            break;
        default:
            cout<<"\t\t\tIncorrect choice."<<endl;
            cout<<"\t\t\tVehicle unable to be finished."<<endl;
            exit(0);
            break;
        }
    }
    else if(vinyls::ch==3){
        vinyls::get_vinyls(100,"Race Flag",0,z);
    }
    else{
        switch(ch1){
        case 1:
            vinyls::get_vinyls(350,"Stripe",1,z);
            break;
        case 2:
            vinyls::get_vinyls(400,"Stripe",2,z);
            break;
        case 3:
            vinyls::get_vinyls(450,"Stripe",3,z);
            break;
        default:
            cout<<"\t\t\tIncorrect choice."<<endl;
            cout<<"\t\t\tVehicle unable to be finished."<<endl;
            exit(0);
            break;
        }
    }
    cout<<"\n";
}



//Class has inherit classes that are required to build a car.
class car:public Performance,public Parts,public visual{
    string car_name;
    int sum;
public:
    car(){
        sum=0;
    }
    car(string str){
        car_name=str;
    }
    car(int x){
        sum=x;
    }
    int p(){
      return sum_total_visual();
    }
    int p1(){
        return total_per();
    }
    int p2(){
        return cost_parts();
    }
    void Display_sum();
    car operator+(car obj){
        car c;
        c.sum=sum+obj.sum;
        return c;
    }
    int single(){
        return sum;
    }
    ~car(){}
};



void car::Display_sum(){
    cout<<"=============================================================================================================="<<endl;
    cout<<"||\t\t\t\t\tBILL\t\t\t\t\t||"<<endl;
    cout<<"||\t\t\t\t\t\t\t\t\t\t||"<<endl;
    cout<<"||\t\t\tTotal Visual cost:$"<<sum_total_visual();
    cout<<"\t\t\t\t\t||\n";
    cout<<"||\t\t\t\tSub Parts:\t\t\t\t\t||"<<endl;
    parts_dis();
    str_display_vinyls();
    cout<<"||\t\t\t\t\t\t\t\t\t\t||"<<endl;
    cout<<"||\t\t\tTotal Performance cost:$"<<total_per();
    cout<<"\t\t\t\t||\n";
    cout<<"||\t\t\t\tSub Parts:\t\t\t\t\t||"<<endl;
    Display_sub_parts();
    cout<<"||\t\t\t\t\t\t\t\t\t\t||";
    cout<<"\n||\t\t\tTotal Parts cost:$"<<cost_parts()<<"\t\t\t\t\t||"<<endl;
    cout<<"||\t\t\t\tSub Parts:\t\t\t\t\t||"<<endl;
    str_display_bodykits();
    str_display_spoilers();
    str_display_rims();
    str_display_Hood();
    sum=(total_per())+(sum_total_visual())+(cost_parts());
}
//__main__
int main(){
    int choice,num;
    string str,name;
    cout<<"\t\t\t\t\t\tWELCOME"<<endl;
    cout<<"\t\t\t\tJAYPEE INSTITUTE OF INFORMATION TECHNOLOGY"<<endl;
    cout<<"\n";
    cout<<"\t\t\t\t\t\t SDF PBL"<<endl;
    cout<<"\t\t\t\tAutomobile Customization/Modification System"<<endl;
    cout<<"\t\tCreated by :\n";
    cout<<"\t\tGaurav Saxena (22102071)"<<endl;
    cout<<"\t\tAnsh Agarwal (22102064)"<<endl;
    cout<<"\t\tAarush Gupta (22102062)"<<endl;
    cout<<"\t\tRudroneel Sengupta (22102074)"<<endl;

    cout<<"\n\t\t\t\tEnter Your Name:";
    getline(cin,name);
    cout<<"\n\n";
    cout<<"\t\t\tAvailable Cars:-"<<endl;
    cout<<"\t\t\t\t1.Mercedes Benz"<<endl;
    cout<<"\t\t\t\t2.Lamborghini"<<endl;
    cout<<"\t\t\t\t3.Porsche"<<endl;
    cout<<"\t\t\t\t4.Aston Martin"<<endl;
    cout<<"\t\t\t\t5.Bugatti"<<endl;
    cout<<"\t\t\t\t6.RAM"<<endl;
    cout<<"\t\t\t\t7.HUMMER"<<endl;
    cout<<"\t\t\t\t8.Scuderia Ferrai"<<endl;
    cout<<"\t\t\t\t9.Dodge"<<endl;
    cout<<"\t\t\t\t10.Pagani\n"<<endl;
    cout<<"\t\t\tEnter your choice:";
    cin>>choice;
    try{
        if(choice==1){
            str="Mercedes Benz";
            throw str;
        }
        else if(choice==2){
            str="Lamborghini";
            throw str;
        }
        else if(choice==3){
            str="Porsche";
            throw str;
        }
        else if(choice==4){
            str="Aston Martin";
            throw str;
        }else if(choice==5){
            str="Bugatti";
            throw str;
        }else if(choice==6){
            str="RAM";
            throw str;
        }else if(choice==7){
            str="HUMMER";
            throw str;
        }else if(choice==8){
            str="Scuderia Ferrari";
            throw str;
        }else if(choice==9){
            str="Dodge";
            throw str;
        }else if(choice==10){
            str="Pagani";
            throw str;
        }
        else{
            throw 11;
        }
    }
    catch(int x){
        if(x>10){
            cout<<"\t\t\tIncorrect choice"<<endl;
            return 0;
        }
    }
    catch(string str1){
        cout<<"\n\t\t\t\tThanks For Selecting Your Car."<<endl;
        cout<<"\t\t\t\t\tCar Name:"<<str1<<endl;
    }
    cout<<"\n\t\tEnter no of Cars you want to produce:";
    cin>>num;
    cout<<"\n";
    car x;
    car *a=new car(50000);
    car *c=new car(str);
    cout<<"------------------------------------------------------------------------------------------------------\n";
    cout<<"\tYour Car will contain the following equipments, Please select appropriate accordingly"<<endl;
    cout<<"\t\t\t1.Parts"<<endl;
    cout<<"\t\t\t2.Performance"<<endl;
    cout<<"\t\t\t3.Visual\n\n";
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\tDisplaying Parts:"<<endl;
    c->Display();
    cout<<"\n";
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\tDisplaying Visuals:"<<endl;
    c->Display_visual();
    cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\tDisplaying Performance:"<<endl;
    c->Display_per();
    cout<<"=============================================================================================================="<<endl;
    cout<<"\t\t\tCongratulation Your Car is Completed Here is your Bill\n";
    cout<<"=============================================================================================================="<<endl;
    cout<<"Displaying Your Bill:"<<endl;
    c->Display_sum();
    cout<<"||\t\t\t\t\t\t\t\t\t\t||"<<endl;
    cout<<"||\t\t\tCar Cost=$50000(without modification)\t\t\t||"<<endl;
    cout<<"||\t\t\tIndividual Car Cost:$";
    x=*c+*a;
    cout<<x.single()<<"\t\t\t\t||"<<endl;
    cout<<"||\t\t\t\t\t\t\t\t\t\t||"<<endl;
    cout<<"||\t\t\t\t\tTotal Sum=$"<<(x.single())*num<<"(Please pay as per the given bill)\t\t||";
    cout<<"\n=================================================================================="<<endl;

   /* MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn=mysql_init(NULL);
    if(!mysql_real_connect(conn,"localhost","admin","admin","car",0,NULL,0)){
        cout<<"\nError connect to database:"<<mysql_error(conn)<<endl;
        return 1;
    }
    string query="INSERT INTO car(name,Visual_Cost,Performance_Cost,Parts_Cost,Total_Sum) values('"+name+"','"+to_string(c->p())+"','"+to_string(c->p1())+"','"+to_string(c->p2())+"','"+to_string((x.single())*num)+"')";
    if(mysql_query(conn,query.c_str())){
        cout<<"\nError inserting values:"<<mysql_error(conn)<<endl;
        return 1;
    }
    mysql_close(conn);*/


    delete a,c;
    thank_you(13);
    getchar();
    return 0;
}
