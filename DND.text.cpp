#include <SFML/Graphics.hpp>

int main()
{
sf::Font font;
if (!font.loadFromFile("Black Clover Font.ttf"))
sf::Text text;

// select the font
text.setFont(font); // font is a sf::Font

// set the string to display
text.setString("Hello world");

// set the character size
text.setCharacterSize(24); // in pixels, not points!

// set the color
text.setFillColor(sf::Color::Red);

// set the text style
text.setStyle(sf::Text::Underlined);

...

// inside the main loop, between window.clear() and window.display()
window.draw(text);
}
