// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_TOOLBUTTON_P_H
#define _GTKMM_TOOLBUTTON_P_H


#include <gtkmm/private/toolitem_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class ToolButton_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ToolButton CppObjectType;
  typedef GtkToolButton BaseObjectType;
  typedef GtkToolButtonClass BaseClassType;
  typedef Gtk::ToolItem_Class CppClassParent;
  typedef GtkToolItemClass BaseClassParent;

  friend class ToolButton;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void clicked_callback(GtkToolButton* self);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_TOOLBUTTON_P_H */

