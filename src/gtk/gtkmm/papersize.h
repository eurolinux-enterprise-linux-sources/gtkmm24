// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_PAPERSIZE_H
#define _GTKMM_PAPERSIZE_H


#include <glibmm.h>

/* Copyright (C) 2006 The gtkmm Development Team
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


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GtkPaperSize GtkPaperSize; }
#endif

namespace Gtk
{

#ifndef DOXYGEN_SHOULD_SKIP_THIS
class PaperSizeTraits;
#endif

/** Common paper names, from PWG 5101.1-2002 PWG: Standard for Media Standardized Names
 *
 */
const Glib::ustring PAPER_NAME_A3 = "iso_a3";
const Glib::ustring PAPER_NAME_A4 = "iso_a4";
const Glib::ustring PAPER_NAME_A5 = "iso_a5";
const Glib::ustring PAPER_NAME_B5 = "iso_b5";
const Glib::ustring PAPER_NAME_LETTER = "na_letter";
const Glib::ustring PAPER_NAME_EXECUTIVE = "na_executive";
const Glib::ustring PAPER_NAME_LEGAL = "na_legal";

/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/**
 * @ingroup gtkmmEnums
 */
enum Unit
{
  UNIT_PIXEL,
  UNIT_POINTS,
  UNIT_INCH,
  UNIT_MM
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::Unit> : public Glib::Value_Enum<Gtk::Unit>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** PaperSize handles paper sizes. It uses the standard called "PWG 5101.1-2002 PWG: Standard for Media Standardized Names"
 * to name the paper sizes (and to get the data for the page sizes). In addition to standard paper sizes, PaperSize allows
 * to construct custom paper sizes with arbitrary dimensions.
 *
 * The PaperSize object stores not only the dimensions (width and height) of a paper size and its name, it also provides
 * default print margins.
 *
 * @newin{2,10}
 *
 * @ingroup Printing
 */
class PaperSize
{
  // Cannot pass the _new function here, it must accept the 'name' argument.
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef PaperSize CppObjectType;
  typedef GtkPaperSize BaseObjectType;

  static GType get_type() G_GNUC_CONST;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  PaperSize();

  explicit PaperSize(GtkPaperSize* gobject, bool make_a_copy = true);

  PaperSize(const PaperSize& other);
  PaperSize& operator=(const PaperSize& other);

  ~PaperSize();

  void swap(PaperSize& other);

  ///Provides access to the underlying C instance.
  GtkPaperSize*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const GtkPaperSize* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GtkPaperSize* gobj_copy() const;

protected:
  GtkPaperSize* gobject_;

private:

public:

  // We don't use a "" default parameter value, though gtk_paper_size_new() can take NULL,
  // because there is already a (desired) default constructor (creating an invalid instance).
  // get_default() does what name="" would do.
  explicit PaperSize(const Glib::ustring& name);
  explicit PaperSize(const Glib::ustring& ppd_name, const Glib::ustring& ppd_display_name, double width, double height);
  explicit PaperSize(const Glib::ustring& name, const Glib::ustring& display_name, double width, double height, Unit unit);

  explicit PaperSize(const Glib::KeyFile& key_file, const Glib::ustring& group_name = Glib::ustring());

  
  bool equal(const PaperSize& other) const;

  /** Returns true if the PaperSize is a valid object.
   * @newin{2,12}
   */
  operator bool() const;

  typedef Glib::ListHandle<PaperSize, PaperSizeTraits> ListHandle_PaperSizes;
  

  /** Creates a list of known paper sizes.
   * 
   * @newin{2,12}
   * @param include_custom Whether to include custom paper sizes
   * as defined in the page setup dialog.
   * @return A newly allocated list of newly
   * allocated Gtk::PaperSize objects.
   */
  static ListHandle_PaperSizes get_paper_sizes(bool include_custom =  true);

  
  /** Gets the name of the Gtk::PaperSize.
   * 
   * @newin{2,10}
   * @return The name of @a size.
   */
  Glib::ustring get_name() const;
  
  /** Gets the human-readable name of the Gtk::PaperSize.
   * 
   * @newin{2,10}
   * @return The human-readable name of @a size.
   */
  Glib::ustring get_display_name() const;
  
  /** Gets the PPD name of the Gtk::PaperSize, which
   * may be <tt>0</tt>.
   * 
   * @newin{2,10}
   * @return The PPD name of @a size.
   */
  Glib::ustring get_ppd_name() const;

  
  /** Gets the paper width of the Gtk::PaperSize, in 
   * units of @a unit.
   * 
   * @newin{2,10}
   * @param unit The unit for the return value.
   * @return The paper width.
   */
  double get_width(Unit unit) const;
  
  /** Gets the paper height of the Gtk::PaperSize, in 
   * units of @a unit.
   * 
   * @newin{2,10}
   * @param unit The unit for the return value.
   * @return The paper height.
   */
  double get_height(Unit unit) const;
  
  /** Returns <tt>true</tt> if @a size is not a standard paper size.
   * @return Whether @a size is a custom paper size.
   */
  bool is_custom() const;

  
  /** Changes the dimensions of a @a size to @a width x @a height.
   * 
   * @newin{2,10}
   * @param width The new width in units of @a unit.
   * @param height The new height in units of @a unit.
   * @param unit The unit for @a width and @a height.
   */
  void set_size(double width, double height, Unit unit);
  
  /** Gets the default top margin for the Gtk::PaperSize.
   * 
   * @newin{2,10}
   * @param unit The unit for the return value.
   * @return The default top margin.
   */
  double get_default_top_margin(Unit unit) const;
  
  /** Gets the default bottom margin for the Gtk::PaperSize.
   * 
   * @newin{2,10}
   * @param unit The unit for the return value.
   * @return The default bottom margin.
   */
  double get_default_bottom_margin(Unit unit) const;
  
  /** Gets the default left margin for the Gtk::PaperSize.
   * 
   * @newin{2,10}
   * @param unit The unit for the return value.
   * @return The default left margin.
   */
  double get_default_left_margin(Unit unit) const;
  
  /** Gets the default right margin for the Gtk::PaperSize.
   * 
   * @newin{2,10}
   * @param unit The unit for the return value.
   * @return The default right margin.
   */
  double get_default_right_margin(Unit unit) const;

  
  /** Returns the name of the default paper size, which 
   * depends on the current locale.  
   * 
   * @newin{2,10}
   * @return The name of the default paper size. The string
   * is owned by GTK+ and should not be modified.
   */
  static Glib::ustring get_default();

   
  /** This function adds the paper size from @a size to @a key_file.
   * 
   * @newin{2,12}
   * @param key_file The KeyFile to save the paper size to.
   * @param group_name The group to add the settings to in @a key_file.
   */
  void save_to_key_file(Glib::KeyFile& key_file, const Glib::ustring& group_name);

  /** This function adds the paper size to @a key_file in the first group.
   *
   * @newin{2,12}
   * @param key_file The Glib::KeyFile to save the paper size to.
   */
  void save_to_key_file(Glib::KeyFile& key_file);


};

/** @relates Gtk::PaperSize */
inline bool operator==(const PaperSize& lhs, const PaperSize& rhs)
  { return lhs.equal(rhs); }

/** @relates Gtk::PaperSize */
inline bool operator!=(const PaperSize& lhs, const PaperSize& rhs)
  { return !lhs.equal(rhs); }

#ifndef DOXYGEN_SHOULD_SKIP_THIS
struct PaperSizeTraits
{
  typedef PaperSize  CppType;
  typedef const GtkPaperSize*      CType;
  typedef GtkPaperSize*            CTypeNonConst;

  static CType   to_c_type      (const CppType& obj) { return obj.gobj();     }
  static CType   to_c_type      (CType          ptr) { return ptr;                   }
  static CppType to_cpp_type    (CType          ptr) { return PaperSize(const_cast<GtkPaperSize*>(ptr), true /* make_copy */); /* Does not take ownership */ }
  static void    release_c_type (CType          /* ptr */) { /* Doesn't happen */ }
};
#endif //DOXYGEN_SHOULD_SKIP_THIS

} // namespace Gtk


namespace Gtk
{

/** @relates Gtk::PaperSize
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(PaperSize& lhs, PaperSize& rhs)
  { lhs.swap(rhs); }

} // namespace Gtk

namespace Glib
{

/** A Glib::wrap() method for this object.
 * 
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gtk::PaperSize
 */
Gtk::PaperSize wrap(GtkPaperSize* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value<Gtk::PaperSize> : public Glib::Value_Boxed<Gtk::PaperSize>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _GTKMM_PAPERSIZE_H */

