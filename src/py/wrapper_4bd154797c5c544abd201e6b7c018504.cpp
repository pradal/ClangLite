#include "_clanglite.h"


void wrapper_4bd154797c5c544abd201e6b7c018504()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_a6aedb4654a55a40aeecf4b1dc5fcc98 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._decl");
    boost::python::object module_a6aedb4654a55a40aeecf4b1dc5fcc98(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a6aedb4654a55a40aeecf4b1dc5fcc98.c_str()))));
    boost::python::scope().attr("_decl") = module_a6aedb4654a55a40aeecf4b1dc5fcc98;
    boost::python::scope scope_a6aedb4654a55a40aeecf4b1dc5fcc98 = module_a6aedb4654a55a40aeecf4b1dc5fcc98;
    boost::python::enum_< enum ::clang::Decl::Kind > enum_4bd154797c5c544abd201e6b7c018504("kind");

    enum_4bd154797c5c544abd201e6b7c018504.value("ACCESS_SPEC", ::clang::Decl::AccessSpec);

    enum_4bd154797c5c544abd201e6b7c018504.value("BLOCK", ::clang::Decl::Block);

    enum_4bd154797c5c544abd201e6b7c018504.value("CAPTURED", ::clang::Decl::Captured);

    enum_4bd154797c5c544abd201e6b7c018504.value("CLASS_SCOPE_FUNCTION_SPECIALIZATION", ::clang::Decl::ClassScopeFunctionSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("EMPTY", ::clang::Decl::Empty);

    enum_4bd154797c5c544abd201e6b7c018504.value("EXTERN_C_CONTEXT", ::clang::Decl::ExternCContext);

    enum_4bd154797c5c544abd201e6b7c018504.value("FILE_SCOPE_ASM", ::clang::Decl::FileScopeAsm);

    enum_4bd154797c5c544abd201e6b7c018504.value("FRIEND", ::clang::Decl::Friend);

    enum_4bd154797c5c544abd201e6b7c018504.value("FRIEND_TEMPLATE", ::clang::Decl::FriendTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("IMPORT", ::clang::Decl::Import);

    enum_4bd154797c5c544abd201e6b7c018504.value("LINKAGE_SPEC", ::clang::Decl::LinkageSpec);

    enum_4bd154797c5c544abd201e6b7c018504.value("LABEL", ::clang::Decl::Label);

    enum_4bd154797c5c544abd201e6b7c018504.value("NAMESPACE", ::clang::Decl::Namespace);

    enum_4bd154797c5c544abd201e6b7c018504.value("NAMESPACE_ALIAS", ::clang::Decl::NamespaceAlias);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_COMPATIBLE_ALIAS", ::clang::Decl::ObjCCompatibleAlias);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_CATEGORY", ::clang::Decl::ObjCCategory);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_CATEGORY_IMPL", ::clang::Decl::ObjCCategoryImpl);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_IMPLEMENTATION", ::clang::Decl::ObjCImplementation);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_OBJ_C_IMPL", ::clang::Decl::firstObjCImpl);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_OBJ_C_IMPL", ::clang::Decl::lastObjCImpl);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_INTERFACE", ::clang::Decl::ObjCInterface);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_PROTOCOL", ::clang::Decl::ObjCProtocol);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_OBJ_C_CONTAINER", ::clang::Decl::firstObjCContainer);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_OBJ_C_CONTAINER", ::clang::Decl::lastObjCContainer);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_METHOD", ::clang::Decl::ObjCMethod);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_PROPERTY", ::clang::Decl::ObjCProperty);

    enum_4bd154797c5c544abd201e6b7c018504.value("BUILTIN_TEMPLATE", ::clang::Decl::BuiltinTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("CLASS_TEMPLATE", ::clang::Decl::ClassTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("FUNCTION_TEMPLATE", ::clang::Decl::FunctionTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("TYPE_ALIAS_TEMPLATE", ::clang::Decl::TypeAliasTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("VAR_TEMPLATE", ::clang::Decl::VarTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_REDECLARABLE_TEMPLATE", ::clang::Decl::firstRedeclarableTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_REDECLARABLE_TEMPLATE", ::clang::Decl::lastRedeclarableTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("TEMPLATE_TEMPLATE_PARM", ::clang::Decl::TemplateTemplateParm);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_TEMPLATE", ::clang::Decl::firstTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_TEMPLATE", ::clang::Decl::lastTemplate);

    enum_4bd154797c5c544abd201e6b7c018504.value("ENUM", ::clang::Decl::Enum);

    enum_4bd154797c5c544abd201e6b7c018504.value("RECORD", ::clang::Decl::Record);

    enum_4bd154797c5c544abd201e6b7c018504.value("CXX_RECORD", ::clang::Decl::CXXRecord);

    enum_4bd154797c5c544abd201e6b7c018504.value("CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::ClassTemplateSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("CLASS_TEMPLATE_PARTIAL_SPECIALIZATION", ::clang::Decl::ClassTemplatePartialSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::firstClassTemplateSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_CLASS_TEMPLATE_SPECIALIZATION", ::clang::Decl::lastClassTemplateSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_CXX_RECORD", ::clang::Decl::firstCXXRecord);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_CXX_RECORD", ::clang::Decl::lastCXXRecord);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_RECORD", ::clang::Decl::firstRecord);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_RECORD", ::clang::Decl::lastRecord);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_TAG", ::clang::Decl::firstTag);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_TAG", ::clang::Decl::lastTag);

    enum_4bd154797c5c544abd201e6b7c018504.value("TEMPLATE_TYPE_PARM", ::clang::Decl::TemplateTypeParm);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_TYPE_PARAM", ::clang::Decl::ObjCTypeParam);

    enum_4bd154797c5c544abd201e6b7c018504.value("TYPE_ALIAS", ::clang::Decl::TypeAlias);

    enum_4bd154797c5c544abd201e6b7c018504.value("TYPEDEF", ::clang::Decl::Typedef);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_TYPEDEF_NAME", ::clang::Decl::firstTypedefName);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_TYPEDEF_NAME", ::clang::Decl::lastTypedefName);

    enum_4bd154797c5c544abd201e6b7c018504.value("UNRESOLVED_USING_TYPENAME", ::clang::Decl::UnresolvedUsingTypename);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_TYPE", ::clang::Decl::firstType);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_TYPE", ::clang::Decl::lastType);

    enum_4bd154797c5c544abd201e6b7c018504.value("USING", ::clang::Decl::Using);

    enum_4bd154797c5c544abd201e6b7c018504.value("USING_DIRECTIVE", ::clang::Decl::UsingDirective);

    enum_4bd154797c5c544abd201e6b7c018504.value("USING_SHADOW", ::clang::Decl::UsingShadow);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIELD", ::clang::Decl::Field);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_AT_DEFS_FIELD", ::clang::Decl::ObjCAtDefsField);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_IVAR", ::clang::Decl::ObjCIvar);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_FIELD", ::clang::Decl::firstField);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_FIELD", ::clang::Decl::lastField);

    enum_4bd154797c5c544abd201e6b7c018504.value("FUNCTION", ::clang::Decl::Function);

    enum_4bd154797c5c544abd201e6b7c018504.value("CXX_METHOD", ::clang::Decl::CXXMethod);

    enum_4bd154797c5c544abd201e6b7c018504.value("CXX_CONSTRUCTOR", ::clang::Decl::CXXConstructor);

    enum_4bd154797c5c544abd201e6b7c018504.value("CXX_CONVERSION", ::clang::Decl::CXXConversion);

    enum_4bd154797c5c544abd201e6b7c018504.value("CXX_DESTRUCTOR", ::clang::Decl::CXXDestructor);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_CXX_METHOD", ::clang::Decl::firstCXXMethod);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_CXX_METHOD", ::clang::Decl::lastCXXMethod);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_FUNCTION", ::clang::Decl::firstFunction);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_FUNCTION", ::clang::Decl::lastFunction);

    enum_4bd154797c5c544abd201e6b7c018504.value("MS_PROPERTY", ::clang::Decl::MSProperty);

    enum_4bd154797c5c544abd201e6b7c018504.value("NON_TYPE_TEMPLATE_PARM", ::clang::Decl::NonTypeTemplateParm);

    enum_4bd154797c5c544abd201e6b7c018504.value("VAR", ::clang::Decl::Var);

    enum_4bd154797c5c544abd201e6b7c018504.value("IMPLICIT_PARAM", ::clang::Decl::ImplicitParam);

    enum_4bd154797c5c544abd201e6b7c018504.value("PARM_VAR", ::clang::Decl::ParmVar);

    enum_4bd154797c5c544abd201e6b7c018504.value("VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::VarTemplateSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("VAR_TEMPLATE_PARTIAL_SPECIALIZATION", ::clang::Decl::VarTemplatePartialSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::firstVarTemplateSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_VAR_TEMPLATE_SPECIALIZATION", ::clang::Decl::lastVarTemplateSpecialization);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_VAR", ::clang::Decl::firstVar);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_VAR", ::clang::Decl::lastVar);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_DECLARATOR", ::clang::Decl::firstDeclarator);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_DECLARATOR", ::clang::Decl::lastDeclarator);

    enum_4bd154797c5c544abd201e6b7c018504.value("ENUM_CONSTANT", ::clang::Decl::EnumConstant);

    enum_4bd154797c5c544abd201e6b7c018504.value("INDIRECT_FIELD", ::clang::Decl::IndirectField);

    enum_4bd154797c5c544abd201e6b7c018504.value("UNRESOLVED_USING_VALUE", ::clang::Decl::UnresolvedUsingValue);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_VALUE", ::clang::Decl::firstValue);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_VALUE", ::clang::Decl::lastValue);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_NAMED", ::clang::Decl::firstNamed);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_NAMED", ::clang::Decl::lastNamed);

    enum_4bd154797c5c544abd201e6b7c018504.value("OMP_THREAD_PRIVATE", ::clang::Decl::OMPThreadPrivate);

    enum_4bd154797c5c544abd201e6b7c018504.value("OBJ_C_PROPERTY_IMPL", ::clang::Decl::ObjCPropertyImpl);

    enum_4bd154797c5c544abd201e6b7c018504.value("STATIC_ASSERT", ::clang::Decl::StaticAssert);

    enum_4bd154797c5c544abd201e6b7c018504.value("TRANSLATION_UNIT", ::clang::Decl::TranslationUnit);

    enum_4bd154797c5c544abd201e6b7c018504.value("FIRST_DECL", ::clang::Decl::firstDecl);

    enum_4bd154797c5c544abd201e6b7c018504.value("LAST_DECL", ::clang::Decl::lastDecl);

}