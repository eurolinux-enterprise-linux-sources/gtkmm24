// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_TOOLSHELL_H
#define _GTKMM_TOOLSHELL_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: editable.hg,v 1.3 2006/05/18 17:53:15 murrayc Exp $ */

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <glibmm/interface.h>
#include <gtkmm/enums.h>
#include <gtkmm/sizegroup.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkToolShellIface GtkToolShellIface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkToolShell GtkToolShell;
typedef struct _GtkToolShellClass GtkToolShellClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class ToolShell_Class; } // namespace Gtk
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A base class for containers containing ToolItem widgets.
 * This interface allows container widgets to provide additional information when embedding ToolItem widgets. 
 *
 * @newin{2,14}
 */

class ToolShell : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef ToolShell CppObjectType;
  typedef ToolShell_Class CppClassType;
  typedef GtkToolShell BaseObjectType;
  typedef GtkToolShellIface BaseClassType;

private:
  friend class ToolShell_Class;
  static CppClassType toolshell_class_;

  // noncopyable
  ToolShell(const ToolShell&);
  ToolShell& operator=(const ToolShell&);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  ToolShell();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit ToolShell(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit ToolShell(GtkToolShell* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~ToolShell();

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkToolShell*       gobj()       { return reinterpret_cast<GtkToolShell*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkToolShell* gobj() const { return reinterpret_cast<GtkToolShell*>(gobject_); }

private:


public:
  
  /** Retrieves the icon size for the tool shell. Tool items must not call this
   * function directly, but rely on Gtk::ToolItem::get_icon_size() instead.
   * 
   * @newin{2,14}
   * 
   * @return The current size for icons of @a shell.
   */
  IconSize get_icon_size() const;
  
  /** Retrieves the current orientation for the tool shell. Tool items must not
   * call this function directly, but rely on Gtk::ToolItem::get_orientation()
   * instead.
   * 
   * @newin{2,14}
   * 
   * @return The current orientation of @a shell.
   */
  Orientation get_orientation() const;
  
  /** Retrieves whether the tool shell has text, icons, or both. Tool items must
   * not call this function directly, but rely on gtk_tool_item_get_style()
   * instead.
   * 
   * @newin{2,14}
   * 
   * @return The current style of @a shell.
   */
  ToolbarStyle get_style() const;
  
  /** Returns the relief style of buttons on @a shell. Tool items must not call this
   * function directly, but rely on Gtk::ToolItem::get_relief_style() instead.
   * 
   * @newin{2,14}
   * 
   * @return The relief style of buttons on @a shell.
   */
  ReliefStyle get_relief_style() const;
  
  /** Calling this function signals the tool shell that the overflow menu item for
   * tool items have changed. If there is an overflow menu and if it is visible
   * when this function it called, the menu will be rebuilt.
   * 
   * Tool items must not call this function directly, but rely on
   * Gtk::ToolItem::rebuild_menu() instead.
   * 
   * @newin{2,14}
   */
  void rebuild_menu();
  
  /** Retrieves the current text orientation for the tool shell. Tool items must not
   * call this function directly, but rely on Gtk::ToolItem::get_text_orientation()
   * instead.
   * 
   * @newin{2,20}
   * 
   * @return The current text orientation of @a shell.
   */
  Orientation get_text_orientation() const;
  
  /** Retrieves the current text alignment for the tool shell. Tool items must not
   * call this function directly, but rely on Gtk::ToolItem::get_text_alignment()
   * instead.
   * 
   * @newin{2,20}
   * 
   * @return The current text alignment of @a shell.
   */
  float get_text_alignment() const;
  
  /** Retrieves the current ellipsize mode for the tool shell. Tool items must not
   * call this function directly, but rely on Gtk::ToolItem::get_ellipsize_mode()
   * instead.
   * 
   * @newin{2,20}
   * 
   * @return The current ellipsize mode of @a shell.
   */
  Pango::EllipsizeMode get_ellipsize_mode() const;

  
  /** Retrieves the current text size group for the tool shell. Tool items must not
   * call this function directly, but rely on Gtk::ToolItem::get_text_size_group()
   * instead.
   * 
   * @newin{2,20}
   * 
   * @return The current text size group of @a shell.
   */
  Glib::RefPtr<SizeGroup> get_text_size_group();
  
  /** Retrieves the current text size group for the tool shell. Tool items must not
   * call this function directly, but rely on Gtk::ToolItem::get_text_size_group()
   * instead.
   * 
   * @newin{2,20}
   * 
   * @return The current text size group of @a shell.
   */
  Glib::RefPtr<const SizeGroup> get_text_size_group() const;
 
protected:

    virtual IconSize get_icon_size_vfunc();

    virtual Orientation get_orientation_vfunc();

    virtual ToolbarStyle get_style_vfunc();

    virtual ReliefStyle get_relief_style_vfunc();

    virtual void rebuild_menu_vfunc();

  //TODO: Add the other vfuncs when we can break ABI.


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ToolShell
   */
  Glib::RefPtr<Gtk::ToolShell> wrap(GtkToolShell* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_TOOLSHELL_H */

