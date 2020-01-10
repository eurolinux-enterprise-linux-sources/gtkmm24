#include <gtkmm.h>
#include <iostream>

void on_property_color_changed()
{
  std::cout << "color property changed" << std::endl;
}

void on_property_name_changed()
{
  //Check that we don't get notification of the wrong property:
  std::cout << "name property changed" << std::endl;
}

int main (int argc, char **argv)
{
  Gtk::Main kit (argc, argv);

  Gtk::Window window;

  Gtk::ColorButton button;
  button.show();

  button.property_color().signal_changed().connect(sigc::ptr_fun(&on_property_color_changed));
  button.property_name().signal_changed().connect(sigc::ptr_fun(&on_property_name_changed));

  window.add(button);

  Gtk::Main::run(window);
}
