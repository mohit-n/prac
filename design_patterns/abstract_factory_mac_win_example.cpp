#include <iostream>
using namespace std;

class Button{
    public:
    virtual void click()=0;
};

class MacButton:public Button{
    public:
    void click(){
        cout<<"Mac clicks"<<endl;
    }
};
class WinButton:public Button{
    public:
    void click(){
        cout<<"Win clicks"<<endl;
    }
};

class Text{
    public:
    virtual void show()=0;
};

class MacText:public Text{
    public:
    void show(){
        cout<<"Mac shows"<<endl;
    }
};
class WinText:public Text{
    public:
    void show(){
        cout<<"Win shows"<<endl;
    }
};

class IFactory{
    public:
    virtual Button* createButton()=0;
    virtual Text* createText()=0; 
};

class MacFactory:public IFactory{
    public:
    Button* createButton(){
        return new MacButton;
    }
    Text* createText(){
        return new MacText;
    }
};
class WinFactory:public IFactory{
    public:
    Button* createButton(){
        return new WinButton;
    }
    Text* createText(){
        return new WinText;
    }
};

class GUIFactory{
    public:
    static IFactory* createFactory(string osType){
        if(osType=="Mac"){
            return new MacFactory;
        } else if (osType=="Win"){
            return new WinFactory;
        }else {
            return new MacFactory;
        }
    }
};
int main(){

    string osType;
    cin>>osType;

    IFactory* myFactory= GUIFactory::createFactory(osType);

    Button *myButton= myFactory->createButton();
    myButton->click();
    Text *myText= myFactory->createText();
    myText->show();
    
}