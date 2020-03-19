#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

int main()
{
        sf::Quads;
    
    sf::RenderWindow window{{800, 600}, "Window"};
    
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
                
                if (event.type == sf::Event::KeyPressed)
                {
                         if (event.key.code == sf::Keyboard::Y)
                        {           
                                text.setString("Then lets begin the game");
                        }
   
                         if (event.key.code == sf::Keyboard::N)
                        { 
                                text.setString("To bad for you the game will still start");
                        }
                }               
           
        }

        window.clear();
        window.draw(text); // Draw all widgets
        window.display();
    }
}

