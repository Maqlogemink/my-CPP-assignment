# include <iostream>
using namespace std; 

class hewan{
   public:
      string NAMAHEWAN;
      string JENISHEWAN;
   public:
      hewan(string namahewan, string jenishewan)
      : NAMAHEWAN(namahewan),JENISHEWAN(jenishewan)
      {
      
      }
      virtual void deskripsi(){
         cout <<"Hewan ini bernama "<< NAMAHEWAN <<" Merupakan hewan sejenis "<< JENISHEWAN <<'\n';
      }

};

class Kucing : public hewan{
   public : 
      int JUMLAH_KAKI ;
      string CIRI_KHUSUS ;
   Kucing(string namahewan, string jenishewan, int jumlahkaki, string ciri_khusus)
   : hewan(namahewan,jenishewan), JUMLAH_KAKI(jumlahkaki),CIRI_KHUSUS(ciri_khusus)
   {
   }
   void deskripsi(){
         cout <<"Hewan ini bernama "<< NAMAHEWAN <<" Merupakan hewan sejenis "<< JENISHEWAN <<" Kakinya berjumlah " << JUMLAH_KAKI
         <<" Mempunyai ciri khusus " << CIRI_KHUSUS <<'\n';
   }
};

class Ikan : public hewan{
   public : 
      string HABITAT;
      string CIRI_KHUSUS ;
   Ikan(string namahewan, string jenishewan, string habitat, string ciri_khusus)
   : hewan(namahewan,jenishewan), HABITAT(habitat), CIRI_KHUSUS(ciri_khusus)
   {  
      
   }
   void deskripsi(){
         cout <<"Hewan ini bernama "<< NAMAHEWAN <<" Merupakan hewan sejenis "<< JENISHEWAN <<" Hidup di " << HABITAT
         <<" Mempunyai ciri khusus " << CIRI_KHUSUS <<'\n';
   }
};


int main(){
   Kucing pussy = Kucing("Kucing","Mamalia",4,"Berbulu, mempunyai taring dan kumis");
   Ikan bob = Ikan("Ikan","Ikan - ikanan","Air tawar dan air laut","Mempunyai sisik dan bernafas dengan insang");


   hewan* A = &pussy;
   hewan* B = &bob;
   
   A->deskripsi();
   B->deskripsi();

   return 0;

}


   
   
   
   











