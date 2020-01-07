#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 100 , 100 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 900 , 500, "My window" }; // Простое окно

	Text t{ Point{0, 100} , "Harry" };
	t.set_font(Font::times_bold);
	t.set_color(Color::green);
	t.set_font_size(112);
	win.attach(t);
	win.wait_for_button();
	Text t2{ Point{300, 100} , "Potter" };
	t2.set_font(Font::times_bold);
	t2.set_color(Color::blue);
	t2.set_font_size(112);
	win.attach(t2);
	win.wait_for_button();
};