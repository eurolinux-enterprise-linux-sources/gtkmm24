// Generated by gtkmmproc -- DO NOT MODIFY!

// So we can still wrap the (deprecated) widget.
#undef GTK_DISABLE_DEPRECATED
#undef GSEAL_ENABLE
 
#ifndef GTKMM_DISABLE_DEPRECATED


#include <gtkmm/inputdialog.h>
#include <gtkmm/private/inputdialog_p.h>

// -*- c++ -*-
/* $Id: inputdialog.ccg,v 1.1 2003/01/21 13:40:27 murrayc Exp $ */

/* 
 *
 * Copyright 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtk/gtk.h>
#include <gtkmm/button.h>
#include <gtkmm/optionmenu.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/table.h>

namespace
{


static void InputDialog_signal_enable_device_callback(GtkInputDialog* self, GdkDevice* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::RefPtr<Gdk::Device>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo InputDialog_signal_enable_device_info =
{
  "enable_device",
  (GCallback) &InputDialog_signal_enable_device_callback,
  (GCallback) &InputDialog_signal_enable_device_callback
};


static void InputDialog_signal_disable_device_callback(GtkInputDialog* self, GdkDevice* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::RefPtr<Gdk::Device>& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo InputDialog_signal_disable_device_info =
{
  "disable_device",
  (GCallback) &InputDialog_signal_disable_device_callback,
  (GCallback) &InputDialog_signal_disable_device_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::InputDialog* wrap(GtkInputDialog* object, bool take_copy)
{
  return dynamic_cast<Gtk::InputDialog *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& InputDialog_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &InputDialog_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_input_dialog_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void InputDialog_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->enable_device = &enable_device_callback;
  klass->disable_device = &disable_device_callback;
}


void InputDialog_Class::enable_device_callback(GtkInputDialog* self, GdkDevice* p0)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_enable_device(Glib::wrap(p0, true)
);
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->enable_device)
    (*base->enable_device)(self, p0);
}
void InputDialog_Class::disable_device_callback(GtkInputDialog* self, GdkDevice* p0)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_disable_device(Glib::wrap(p0, true)
);
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->disable_device)
    (*base->disable_device)(self, p0);
}


Glib::ObjectBase* InputDialog_Class::wrap_new(GObject* o)
{
  return new InputDialog((GtkInputDialog*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

InputDialog::InputDialog(const Glib::ConstructParams& construct_params)
:
  Gtk::Dialog(construct_params)
{
  }

InputDialog::InputDialog(GtkInputDialog* castitem)
:
  Gtk::Dialog((GtkDialog*)(castitem))
{
  }

InputDialog::~InputDialog()
{
  destroy_();
}

InputDialog::CppClassType InputDialog::inputdialog_class_; // initialize static member

GType InputDialog::get_type()
{
  return inputdialog_class_.init().get_type();
}


GType InputDialog::get_base_type()
{
  return gtk_input_dialog_get_type();
}


InputDialog::InputDialog()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(inputdialog_class_.init()))
{
  

}

 Table* InputDialog::get_axis_list()
{
  return Glib::wrap((GtkTable*)(gobj()->axis_list));
}

const Table* InputDialog::get_axis_list() const
{
  return Glib::wrap((GtkTable*)(gobj()->axis_list));
}
 
 ScrolledWindow* InputDialog::get_axis_box()
{
  return Glib::wrap((GtkScrolledWindow*)(gobj()->axis_listbox));
}

const ScrolledWindow* InputDialog::get_axis_box() const
{
  return Glib::wrap((GtkScrolledWindow*)(gobj()->axis_listbox));
}
 
#ifndef GTKMM_DISABLE_DEPRECATED
   OptionMenu* InputDialog::get_mode_optionmenu()
{
  return Glib::wrap((GtkOptionMenu*)(gobj()->mode_optionmenu));
}

const OptionMenu* InputDialog::get_mode_optionmenu() const
{
  return Glib::wrap((GtkOptionMenu*)(gobj()->mode_optionmenu));
}
#endif // GTKMM_DISABLE_DEPRECATED
   
 Button* InputDialog::get_close_button()
{
  return Glib::wrap((GtkButton*)(gobj()->close_button));
}

const Button* InputDialog::get_close_button() const
{
  return Glib::wrap((GtkButton*)(gobj()->close_button));
}
 
 Button* InputDialog::get_save_button()
{
  return Glib::wrap((GtkButton*)(gobj()->save_button));
}

const Button* InputDialog::get_save_button() const
{
  return Glib::wrap((GtkButton*)(gobj()->save_button));
}
 
 Glib::RefPtr<Gdk::Device> InputDialog::get_current_device()
{
  Glib::RefPtr<Gdk::Device> ref_ptr(Glib::wrap(gobj()->current_device));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

Glib::RefPtr<const Gdk::Device> InputDialog::get_current_device() const
{
  Glib::RefPtr<const Gdk::Device> ref_ptr(Glib::wrap(gobj()->current_device));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}
 
 Table* InputDialog::get_keys_list()
{
  return Glib::wrap((GtkTable*)(gobj()->keys_list));
}

const Table* InputDialog::get_keys_list() const
{
  return Glib::wrap((GtkTable*)(gobj()->keys_list));
}
 
 ScrolledWindow* InputDialog::get_keys_box()
{
  return Glib::wrap((GtkScrolledWindow*)(gobj()->keys_listbox));
}

const ScrolledWindow* InputDialog::get_keys_box() const
{
  return Glib::wrap((GtkScrolledWindow*)(gobj()->keys_listbox));
}
 

Glib::SignalProxy1< void,const Glib::RefPtr<Gdk::Device>& > InputDialog::signal_enable_device()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Gdk::Device>& >(this, &InputDialog_signal_enable_device_info);
}


Glib::SignalProxy1< void,const Glib::RefPtr<Gdk::Device>& > InputDialog::signal_disable_device()
{
  return Glib::SignalProxy1< void,const Glib::RefPtr<Gdk::Device>& >(this, &InputDialog_signal_disable_device_info);
}


void Gtk::InputDialog::on_enable_device(const Glib::RefPtr<Gdk::Device>& device)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->enable_device)
    (*base->enable_device)(gobj(),Glib::unwrap(device));
}
void Gtk::InputDialog::on_disable_device(const Glib::RefPtr<Gdk::Device>& device)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->disable_device)
    (*base->disable_device)(gobj(),Glib::unwrap(device));
}


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED


