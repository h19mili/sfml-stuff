#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <stdio.h>
#include <time.h>


int main()
{
        int i=0;
    std::string(istats);
    srand (time(NULL));
    istats = std::to_string(rand() % 18+1);
    
    sf::RenderWindow window{{800, 600}, "Window"};
    tgui::Gui gui{window};
    tgui::EditBox::Ptr Box0 = tgui::EditBox::create();
            Box0 -> setPosition(100,150);
            gui.add(Box0);
    tgui::EditBox::Ptr Box1 = tgui::EditBox::create();
            Box1 -> setPosition(100,175);
            gui.add(Box1);
    tgui::EditBox::Ptr Box2 = tgui::EditBox::create();
            Box2 -> setPosition(100,200);
            gui.add(Box2);
    tgui::EditBox::Ptr Box3 = tgui::EditBox::create();
            Box3 -> setPosition(100,225);
            gui.add(Box3);
    tgui::EditBox::Ptr Box4 = tgui::EditBox::create();
            Box4 -> setPosition(100,250);
            gui.add(Box4);
    tgui::EditBox::Ptr Box5 = tgui::EditBox::create();
            Box5 -> setPosition(100,275);
            gui.add(Box5);
            
        sf::Font font;
        font.loadFromFile("Black Clover Font.ttf");
                sf::Text text;

        text.setFont(font); 

        
        text.setString("Do you wanna play a game?  Y/N");

      
        text.setCharacterSize(24); 
       
        text.setFillColor(sf::Color::White);

       
        text.setStyle(sf::Text::Underlined);
        
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
                
                gui.handleEvent(event);
                
                if (event.type == sf::Event::KeyPressed)
                {
                         if (event.key.code == sf::Keyboard::Y)
                        {           
                                text.setString("Now the game will start\n");
                        }
   
                         if (event.key.code == sf::Keyboard::N)
                        { 
                                text.setString("To bad for you the game will still start");
                        }       
                                
                         if (event.key.code == sf::Keyboard::Q)        
                        {        
                                while(i<=5){
                                        Box0 -> setText(istats);
                                        
                                        
                                        
                                        }
                        }
                        
                }               
           
        }

        window.clear();
        window.draw(text); // Draw all widgets
        gui.draw();
        window.display();
    }
}

