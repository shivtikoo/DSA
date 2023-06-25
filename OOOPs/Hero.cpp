class Hero{

    char name[20];
    int health;
    char level;

    public:
    //CONSTRUCTOR
    Hero(){
        cout<<"Constructor invoked";
    }

    void setter(char x){
        level=x;
    }

    char getter(){
        return level;
    }


    
};