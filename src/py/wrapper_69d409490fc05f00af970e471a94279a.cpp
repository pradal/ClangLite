#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TypeOfType const volatile * get_pointer<class ::clang::TypeOfType const volatile >(class ::clang::TypeOfType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_69d409490fc05f00af970e471a94279a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::TypeOfType::*method_pointer_1c953d3302d051e79d282c7ecff266bc)() const = &::clang::TypeOfType::getUnderlyingType;
    class ::clang::QualType  (::clang::TypeOfType::*method_pointer_75a001cdafcb542a8df5e5ccd5a5c894)() const = &::clang::TypeOfType::desugar;
    bool  (::clang::TypeOfType::*method_pointer_7de6f64d01e250c390259f230956f1fa)() const = &::clang::TypeOfType::isSugared;
    bool  (*method_pointer_f0571cdd3a155e3b8c87b70bbe8d88ef)(class ::clang::Type const *) = ::clang::TypeOfType::classof;
    boost::python::class_< class ::clang::TypeOfType, autowig::Held< class ::clang::TypeOfType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_69d409490fc05f00af970e471a94279a("TypeOfType", "", boost::python::no_init);
    class_69d409490fc05f00af970e471a94279a.def("get_underlying_type", method_pointer_1c953d3302d051e79d282c7ecff266bc, "");
    class_69d409490fc05f00af970e471a94279a.def("desugar", method_pointer_75a001cdafcb542a8df5e5ccd5a5c894, "Remove a single level of sugar.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_69d409490fc05f00af970e471a94279a.def("is_sugared", method_pointer_7de6f64d01e250c390259f230956f1fa, "Returns whether this type directly provides sugar.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_69d409490fc05f00af970e471a94279a.def("classof", method_pointer_f0571cdd3a155e3b8c87b70bbe8d88ef, "");
    class_69d409490fc05f00af970e471a94279a.staticmethod("classof");

    if(autowig::Held< class ::clang::TypeOfType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypeOfType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::TypeOfType >::Type, boost::python::objects::make_ptr_instance< class ::clang::TypeOfType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::TypeOfType >::Type, class ::clang::TypeOfType > > >();
    }

}