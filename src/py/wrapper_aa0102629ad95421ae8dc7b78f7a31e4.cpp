#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TemplateTypeParmType const volatile * get_pointer<class ::clang::TemplateTypeParmType const volatile >(class ::clang::TemplateTypeParmType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa0102629ad95421ae8dc7b78f7a31e4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_7177104d9f54572abc9749faf9e21e45)() const = &::clang::TemplateTypeParmType::getDepth;
    unsigned int  (::clang::TemplateTypeParmType::*method_pointer_0445e1f1588059cf912c3cc358c133ad)() const = &::clang::TemplateTypeParmType::getIndex;
    bool  (::clang::TemplateTypeParmType::*method_pointer_36e1b7c36f3457409aeb05b1157df72d)() const = &::clang::TemplateTypeParmType::isParameterPack;
    class ::clang::TemplateTypeParmDecl * (::clang::TemplateTypeParmType::*method_pointer_caa7fc2944845056a7f334ab4c8a203f)() const = &::clang::TemplateTypeParmType::getDecl;
    bool  (::clang::TemplateTypeParmType::*method_pointer_dd2e3cd08d2f5b469895f9b2d853deb6)() const = &::clang::TemplateTypeParmType::isSugared;
    class ::clang::QualType  (::clang::TemplateTypeParmType::*method_pointer_97a651b6302e52dcb70019799a1bc803)() const = &::clang::TemplateTypeParmType::desugar;
    bool  (*method_pointer_7941f0c121e75eacbbc1b0266fe13c77)(class ::clang::Type const *) = ::clang::TemplateTypeParmType::classof;
    boost::python::class_< class ::clang::TemplateTypeParmType, autowig::Held< class ::clang::TemplateTypeParmType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_aa0102629ad95421ae8dc7b78f7a31e4("TemplateTypeParmType", "", boost::python::no_init);
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_7177104d9f54572abc9749faf9e21e45, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_0445e1f1588059cf912c3cc358c133ad, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_36e1b7c36f3457409aeb05b1157df72d, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_caa7fc2944845056a7f334ab4c8a203f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_dd2e3cd08d2f5b469895f9b2d853deb6, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("desugar", method_pointer_97a651b6302e52dcb70019799a1bc803, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("classof", method_pointer_7941f0c121e75eacbbc1b0266fe13c77, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.staticmethod("classof");

    if(autowig::Held< class ::clang::TemplateTypeParmType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TemplateTypeParmType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::TemplateTypeParmType >::Type, boost::python::objects::make_ptr_instance< class ::clang::TemplateTypeParmType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::TemplateTypeParmType >::Type, class ::clang::TemplateTypeParmType > > >();
    }

}