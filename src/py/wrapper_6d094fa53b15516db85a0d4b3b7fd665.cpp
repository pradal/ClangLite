#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::CXXRecordDecl const volatile * get_pointer<class ::clang::CXXRecordDecl const volatile >(class ::clang::CXXRecordDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6d094fa53b15516db85a0d4b3b7fd665()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXRecordDecl * (::clang::CXXRecordDecl::*method_pointer_49a89a0619785ff695925f5f6448c5db)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl const * (::clang::CXXRecordDecl::*method_pointer_abe57104c4ec5741a21cfd8614ac9837)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl * (::clang::CXXRecordDecl::*method_pointer_b5870249dfab51719035733300eeaf9a)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl const * (::clang::CXXRecordDecl::*method_pointer_c5eab7ec83e3528482c111449c5510e1)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl * (::clang::CXXRecordDecl::*method_pointer_e61647079e8b50e9a8be35089de24dca)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl const * (::clang::CXXRecordDecl::*method_pointer_be309aec9061549b9a8446b00ba0e693)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl * (::clang::CXXRecordDecl::*method_pointer_c9c2c29deae95012b1c50276e15efec1)() const = &::clang::CXXRecordDecl::getDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_220357cbceba5793b4bc26da6bcd47a3)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_86e3276801195c49b0471dec0a76a3d9)() const = &::clang::CXXRecordDecl::isDynamicClass;
    void  (::clang::CXXRecordDecl::*method_pointer_86fb9a1029cf59aaa9f4b2a622896d25)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_457833adc18b52309b893e806b8723b0)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_3ae2df53a25d5cbea70dae1b1aa9f4da)() const = &::clang::CXXRecordDecl::getNumBases;
    ::clang::CXXRecordDecl::base_class_iterator  (::clang::CXXRecordDecl::*method_pointer_1ed72f0fbc4558678e2bbf1bba30dff3)() = &::clang::CXXRecordDecl::bases_begin;
    ::clang::CXXRecordDecl::base_class_const_iterator  (::clang::CXXRecordDecl::*method_pointer_5a36eaf88ba558daaaa549eaf75a6879)() const = &::clang::CXXRecordDecl::bases_begin;
    ::clang::CXXRecordDecl::base_class_iterator  (::clang::CXXRecordDecl::*method_pointer_be26074f9dac59a793e058f2683ea957)() = &::clang::CXXRecordDecl::bases_end;
    ::clang::CXXRecordDecl::base_class_const_iterator  (::clang::CXXRecordDecl::*method_pointer_882c733d85075779b94ef01af513dd7a)() const = &::clang::CXXRecordDecl::bases_end;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_548915aa91fe54178926fd2a7bb8a131)() const = &::clang::CXXRecordDecl::getNumVBases;
    ::clang::CXXRecordDecl::base_class_iterator  (::clang::CXXRecordDecl::*method_pointer_eaa4624b2d4a556b9b924670018e3e34)() = &::clang::CXXRecordDecl::vbases_begin;
    ::clang::CXXRecordDecl::base_class_const_iterator  (::clang::CXXRecordDecl::*method_pointer_8092176439375b0099a275b419a7596c)() const = &::clang::CXXRecordDecl::vbases_begin;
    ::clang::CXXRecordDecl::base_class_iterator  (::clang::CXXRecordDecl::*method_pointer_ac33804fbbaa5869ac7e04fed8d7952d)() = &::clang::CXXRecordDecl::vbases_end;
    ::clang::CXXRecordDecl::base_class_const_iterator  (::clang::CXXRecordDecl::*method_pointer_ebc7c3f2126e5402bc98e73eb9777b2c)() const = &::clang::CXXRecordDecl::vbases_end;
    bool  (::clang::CXXRecordDecl::*method_pointer_d9e4d4c8d40b5532a4558ca0a16186e0)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    void  (::clang::CXXRecordDecl::*method_pointer_bd419f3fec035ba3ae1da09f6f473562)(class ::clang::FriendDecl *) = &::clang::CXXRecordDecl::pushFriendDecl;
    bool  (::clang::CXXRecordDecl::*method_pointer_2cf3f656c2035e08b957a08fb9ff2156)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_2952efaba1ed5349b03c1cc0fb7e94f0)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_00e01a1b162053208d1802f18578ee86)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_16bcbfb1df5b5e748c71d625e892b9db)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_99402e17c2ab5dd9b9fc59bbb3fb83b7)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_3b5715d2ee715a5d87ea31f28ef8678b)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_19324f93dfae5a8ba49526090701eed2)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_09f7d6f9546352e6b7efc126f21f91c6)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_99754ad9cb60507eac266dae2d29bbad)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_bcb7506648df5f358c10af8898a75396)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_924cd81a52d257d0995bcfb076c90844)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6fe4737d53b85465a6383a4c8f9d570a)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_b8209a08b5035f0fbffb3013bcec14d8)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_b55bae827bdd5f72a5411e25f01906b2)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_3eab606175b150a09c4586d79269ce36)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c1c4368a2f005f5f9ddb84ae0ef93b78)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    void  (::clang::CXXRecordDecl::*method_pointer_9a3fb78439815a78a75ba198a4b900bc)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    bool  (::clang::CXXRecordDecl::*method_pointer_d1eb68dfd9cc5002a09eeaea216a9d42)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_2e88af1534d75377b89dba5697e1a028)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_410783e55c4b580a84b86fb3d2e3ccad)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_2ab9f6ea49135c29acd68c1cbbd87994)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_7661cde2d66e5b4983576ec45f664cfb)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_c3be7989f9d25446bf90c671022f93d7)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_51ef86c09be75e0781b3af3942b7f483)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_67a63b093f2350288548efa17d657336)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_34252d129cd75fb8a318382c1b90523f)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    void  (::clang::CXXRecordDecl::*method_pointer_3db56e2ec45856a8bc7e81d80a508e38)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    bool  (::clang::CXXRecordDecl::*method_pointer_01332f90684d53e0bcd6641e54165353)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_b7eef65b762d555fbc62a08fc522afb4)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_1ad4cc8eb6b0534db2aea3955f4b4522)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_31e7c481761554d8b9b3ce7906b03ac7)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e15c6cc9a180515e8abfd9f37504bc64)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_001fdf7e16ba5e6ea1bacf989053cdd2)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_42bd724fea8856abb8f8f3c726016b75)() const = &::clang::CXXRecordDecl::isGenericLambda;
    class ::clang::CXXMethodDecl * (::clang::CXXRecordDecl::*method_pointer_f1451cd7c40756e1aaa3f36f1b470d3e)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::CXXMethodDecl * (::clang::CXXRecordDecl::*method_pointer_4615f86c79d35167ab9e399a0b869fa2)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    void  (::clang::CXXRecordDecl::*method_pointer_1ec98790e25d5b92a5c176b592280f52)(class ::clang::NamedDecl const *) = &::clang::CXXRecordDecl::removeConversion;
    bool  (::clang::CXXRecordDecl::*method_pointer_9c340dd2f8185339864f007be961d79c)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_68b105df1cd45d209811be9e2d91cb2c)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_a4f32ccd77555d2c8a3c6628ec8500c5)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_0872523ac3f75bd196b7e5401f90dc04)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_adf180f5ed8a5b69bc6c726091613ff7)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_8af2930b90295b44a63b0415290b82b7)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_9449fb750f8b53549bd1462195fe5760)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_219649b9814c588cbd9e6fe0db5bc00e)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_f2c6517ca9405316a4fdb77a28140f8c)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_e94925c62cd65c27b37b51f91477c805)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_22be78da3554505fbbbeec2bbc3fca1b)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_ffcb84bd27d45a94ac5b4c3f6a957655)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c5679e0caf2f507f82ff16cdbec5df18)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_91bd523306df5d31830eb5cb16f65ae1)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_34acf71bb7b25fcd9f6836937d71f2d9)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    bool  (::clang::CXXRecordDecl::*method_pointer_62d0525f792155b19ce25838997526a4)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_ee9434f5b4385f569908660c196a8d51)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0101334cb53f54c3872559e0e846be33)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_69846605fd9d5c60b096b88a0b3f2efe)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_04635c16aff251989ef88ca9cf660aee)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_82ebb38055f957d7bd6c928524cedbf3)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_147533aeb9ad56cea731ecb2ece41b37)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_a4b657dd2934517f88d47670c6631268)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_add69794161f5782b70588a1fe1d51ed)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_dbc24656827458159f89e3fc0ca2bbd9)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c41d3aeb8f15581681dcad8563f39501)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_17811ae767fb555ab7ceb7758370aacd)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c75e81466cee50b08e26b10db1eaf2ac)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_87a40aef62f651bd93ea773c328d3a7a)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_1c16f2a7570d57b588871c4fca1ccd48)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_5938ebe32a655c6297bf5fc47acdc606)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::CXXRecordDecl * (::clang::CXXRecordDecl::*method_pointer_ac6641bb92ee53769502dd3a1948ca34)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::ClassTemplateDecl * (::clang::CXXRecordDecl::*method_pointer_d2a370a02d1355a18d1bd2e3c14bf154)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_96dc3753e0d153219c5d17cece281cea)(class ::clang::ClassTemplateDecl *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    class ::clang::CXXRecordDecl const * (::clang::CXXRecordDecl::*method_pointer_f65e931d0c9a5427a488f136c1edb18d)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl * (::clang::CXXRecordDecl::*method_pointer_e01f29f776b150d588237152e3166e12)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXDestructorDecl * (::clang::CXXRecordDecl::*method_pointer_f84e53f7e2c25925b0c98f6818404e47)() const = &::clang::CXXRecordDecl::getDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e396a196f573530487980cfc0b03f106)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    class ::clang::FunctionDecl const * (::clang::CXXRecordDecl::*method_pointer_2c4b4be2c2c75388acb9dd052e5a2235)() const = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl * (::clang::CXXRecordDecl::*method_pointer_19b864f4c61058e192154cb1ca5111c5)() = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_c40e88fe1ac1510390945e05cda0ac4c)(class ::clang::DeclContext const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_5e19891610ab5779835e354c4480e106)(class ::clang::CXXRecordDecl const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_3d476dfd864751d59c871de579960100)(class ::clang::CXXRecordDecl const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_6716c294f192545999ae5116f16e93c5)(class ::clang::CXXRecordDecl const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    void  (::clang::CXXRecordDecl::*method_pointer_1a3449c5b6fb5ab49a457af059dbd386)(class ::clang::ASTContext &) const = &::clang::CXXRecordDecl::viewInheritance;
    enum ::clang::AccessSpecifier  (*method_pointer_1fb7fac90f1b5a68900f5419aaa95350)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    void  (::clang::CXXRecordDecl::*method_pointer_ea8d7391c68254a2a7b7aac8ec687b68)(class ::clang::CXXMethodDecl *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_5587df8d769159b5bb56eff2b9d71f1e)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_44ffd2086e7758788f4946f40d38f6bb)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::Decl * (::clang::CXXRecordDecl::*method_pointer_6caf99412c885c01b69798765cbd642b)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_82e94b5450025e0f8c5004d790d39e33)(unsigned int , class ::clang::Decl *) = &::clang::CXXRecordDecl::setLambdaMangling;
    bool  (::clang::CXXRecordDecl::*method_pointer_58ca48a3bf18540195797af2fafd76c9)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    bool  (::clang::CXXRecordDecl::*method_pointer_0e059ab545d757438c27dfb74bb471d7)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (*method_pointer_415df47dc8dd5a0abe2ff9bf5c9032f6)(class ::clang::Decl const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_28ada20362ec5a3693bf05f9091caeee)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    struct function_group
    {
        static class ::boost::python::list  function_30c8c4e1f98159ffb93116b9490c2b5e(class ::clang::CXXRecordDecl & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_34a2ddd426cc5e5384d43e1276d3eab7(class ::clang::CXXRecordDecl & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_5f12b293d8b05d9a8f8c8f23e2ab3428(class ::clang::CXXRecordDecl & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::Held< class ::clang::CXXRecordDecl >::Type, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "Represents a C++ struct/union/class.\n\n", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_49a89a0619785ff695925f5f6448c5db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_abe57104c4ec5741a21cfd8614ac9837, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_b5870249dfab51719035733300eeaf9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_c5eab7ec83e3528482c111449c5510e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_e61647079e8b50e9a8be35089de24dca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_be309aec9061549b9a8446b00ba0e693, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_c9c2c29deae95012b1c50276e15efec1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_220357cbceba5793b4bc26da6bcd47a3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_86e3276801195c49b0471dec0a76a3d9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_86fb9a1029cf59aaa9f4b2a622896d25, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_457833adc18b52309b893e806b8723b0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_3ae2df53a25d5cbea70dae1b1aa9f4da, "Retrieves the number of base classes of this class.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("bases_begin", method_pointer_1ed72f0fbc4558678e2bbf1bba30dff3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("bases_begin", method_pointer_5a36eaf88ba558daaaa549eaf75a6879, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("bases_end", method_pointer_be26074f9dac59a793e058f2683ea957, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("bases_end", method_pointer_882c733d85075779b94ef01af513dd7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_548915aa91fe54178926fd2a7bb8a131, "Retrieves the number of virtual base classes of this class.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("vbases_begin", method_pointer_eaa4624b2d4a556b9b924670018e3e34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("vbases_begin", method_pointer_8092176439375b0099a275b419a7596c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("vbases_end", method_pointer_ac33804fbbaa5869ac7e04fed8d7952d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("vbases_end", method_pointer_ebc7c3f2126e5402bc98e73eb9777b2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_d9e4d4c8d40b5532a4558ca0a16186e0, "Determine whether this class has any dependent base classes which are\nnot the current instantiation.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_bd419f3fec035ba3ae1da09f6f473562, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_2cf3f656c2035e08b957a08fb9ff2156, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_2952efaba1ed5349b03c1cc0fb7e94f0, ":raw-latex:`\\c t`rue if we know for sure that this class has a single,\naccessible, unambiguous move constructor that is not deleted.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_00e01a1b162053208d1802f18578ee86, ":raw-latex:`\\c t`rue if we know for sure that this class has a single,\naccessible, unambiguous move assignment operator that is not deleted.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_16bcbfb1df5b5e748c71d625e892b9db, ":raw-latex:`\\c t`rue if we know for sure that this class has an\naccessible destructor that is not deleted.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_99402e17c2ab5dd9b9fc59bbb3fb83b7, "Determine whether this class has any default constructors.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_3b5715d2ee715a5d87ea31f28ef8678b, "Determine if we need to declare a default constructor for this class.\n\nThis value is used for lazy creation of default constructors.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_19324f93dfae5a8ba49526090701eed2, "Determine whether this class has any user-declared constructors.\n\nWhen true, a default constructor will not be implicitly declared.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_09f7d6f9546352e6b7efc126f21f91c6, "Whether this class has a user-provided default constructor per C++11.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_99754ad9cb60507eac266dae2d29bbad, "Determine whether this class has a user-declared copy constructor.\n\nWhen false, a copy constructor will be implicitly declared.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_bcb7506648df5f358c10af8898a75396, "Determine whether this class needs an implicit copy constructor to be\nlazily declared.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_924cd81a52d257d0995bcfb076c90844, "Determine whether we need to eagerly declare a defaulted copy\nconstructor for this class.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_6fe4737d53b85465a6383a4c8f9d570a, "Determine whether an implicit copy constructor for this type would have\na parameter with a const-qualified reference type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_b8209a08b5035f0fbffb3013bcec14d8, "Determine whether this class has a copy constructor with a parameter\ntype which is a reference to a const-qualified type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_b55bae827bdd5f72a5411e25f01906b2, "Whether this class has a user-declared move constructor or assignment\noperator.\n\nWhen false, a move constructor and assignment operator may be implicitly\ndeclared.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_3eab606175b150a09c4586d79269ce36, "Determine whether this class has had a move constructor declared by the\nuser.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_c1c4368a2f005f5f9ddb84ae0ef93b78, "Determine whether this class has a move constructor.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_9a3fb78439815a78a75ba198a4b900bc, "Set that we attempted to declare an implicitly move constructor, but\noverload resolution failed so we deleted it.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_d1eb68dfd9cc5002a09eeaea216a9d42, "Determine whether this class should get an implicit move constructor or\nif any existing special member function inhibits this.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_2e88af1534d75377b89dba5697e1a028, "Determine whether we need to eagerly declare a defaulted move\nconstructor for this class.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_410783e55c4b580a84b86fb3d2e3ccad, "Determine whether this class has a user-declared copy assignment\noperator.\n\nWhen false, a copy assigment operator will be implicitly declared.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_2ab9f6ea49135c29acd68c1cbbd87994, "Determine whether this class needs an implicit copy assignment operator\nto be lazily declared.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_7661cde2d66e5b4983576ec45f664cfb, "Determine whether we need to eagerly declare a defaulted copy assignment\noperator for this class.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_c3be7989f9d25446bf90c671022f93d7, "Determine whether an implicit copy assignment operator for this type\nwould have a parameter with a const-qualified reference type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_51ef86c09be75e0781b3af3942b7f483, "Determine whether this class has a copy assignment operator with a\nparameter type which is a reference to a const-qualified type or is not\na reference.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_67a63b093f2350288548efa17d657336, "Determine whether this class has had a move assignment declared by the\nuser.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_34252d129cd75fb8a318382c1b90523f, "Determine whether this class has a move assignment operator.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_3db56e2ec45856a8bc7e81d80a508e38, "Set that we attempted to declare an implicit move assignment operator,\nbut overload resolution failed so we deleted it.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_01332f90684d53e0bcd6641e54165353, "Determine whether this class should get an implicit move assignment\noperator or if any existing special member function inhibits this.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_b7eef65b762d555fbc62a08fc522afb4, "Determine whether we need to eagerly declare a move assignment operator\nfor this class.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_1ad4cc8eb6b0534db2aea3955f4b4522, "Determine whether this class has a user-declared destructor.\n\nWhen false, a destructor will be implicitly declared.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_31e7c481761554d8b9b3ce7906b03ac7, "Determine whether this class needs an implicit destructor to be lazily\ndeclared.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_e15c6cc9a180515e8abfd9f37504bc64, "Determine whether we need to eagerly declare a destructor for this\nclass.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_001fdf7e16ba5e6ea1bacf989053cdd2, "Determine whether this class describes a lambda function object.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_42bd724fea8856abb8f8f3c726016b75, "Determine whether this class describes a generic lambda function object\n(i.e. function call operator is a template).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_f1451cd7c40756e1aaa3f36f1b470d3e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the lambda call operator of the closure type if this is a\nclosure type.\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXMethodDecl`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_4615f86c79d35167ab9e399a0b869fa2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the lambda static invoker, the address of which is returned by\nthe conversion operator, and the body of which is forwarded to the\nlambda call operator.\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXMethodDecl`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_1ec98790e25d5b92a5c176b592280f52, ":Parameter:\n    `Old` (:py:class:`clanglite.clang.NamedDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_9c340dd2f8185339864f007be961d79c, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_68b105df1cd45d209811be9e2d91cb2c, "Whether this class has any in-class initializers for non-static data\nmembers (including those in anonymous unions or structs).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_a4f32ccd77555d2c8a3c6628ec8500c5, "Whether this class or any of its subobjects has any members of reference\ntype which would make value-initialization ill-formed.\n\nPer C++03 [dcl.init]p5: - if T is a non-union class type without a\nuser-declared constructor, then every non-static data member and\nbase-class component of T is value-initialized [...] A program that\ncalls for [...] value-initialization of an entity of reference type is\nill-formed.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_0872523ac3f75bd196b7e5401f90dc04, "Whether this class is a POD-type (C++ [class]p4)\n\nFor purposes of this function a class is POD if it is an aggregate that\nhas no non-static non-POD data members, no reference data members, no\nuser-defined copy assignment operator and no user-defined destructor.\n\nNote that this is the C++ TR1 definition of POD.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_adf180f5ed8a5b69bc6c726091613ff7, "True if this class is C-like, without C++-specific features, e.g. it\ncontains only public fields, no bases, tag kind is not 'class', etc.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_8af2930b90295b44a63b0415290b82b7, "Determine whether this is an empty class in the sense of (C++11\n[meta.unary.prop]).\n\nA non-union class is empty iff it has a virtual function, virtual base,\ndata member (other than 0-width bit-field) or inherits from a non-empty\nclass.\n\n:Return Type:\n    :cpp:any:`bool`\n\n.. note::\n\n    This does NOT include a check for union-ness.\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_9449fb750f8b53549bd1462195fe5760, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_219649b9814c588cbd9e6fe0db5bc00e, "Determine whether this class has a pure virtual function.\n\nThe class is is abstract per (C++ [class.abstract]p2) if it declares a\npure virtual function or inherits a pure virtual function that is not\noverridden.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_f2c6517ca9405316a4fdb77a28140f8c, "Determine whether this class has standard layout per (C++ [class]p7)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_e94925c62cd65c27b37b51f91477c805, "Determine whether this class, or any of its class subobjects, contains a\nmutable field.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_22be78da3554505fbbbeec2bbc3fca1b, "Determine whether this class has any variant members.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_ffcb84bd27d45a94ac5b4c3f6a957655, "Determine whether this class has a trivial default constructor (C++11\n[class.ctor]p5).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_c5679e0caf2f507f82ff16cdbec5df18, "Determine whether this class has a non-trivial default constructor\n(C++11 [class.ctor]p5).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_91bd523306df5d31830eb5cb16f65ae1, "Determine whether this class has at least one constexpr constructor\nother than the copy or move constructors.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_34acf71bb7b25fcd9f6836937d71f2d9, "Determine whether a defaulted default constructor for this class would\nbe constexpr.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_62d0525f792155b19ce25838997526a4, "Determine whether this class has a constexpr default constructor.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_ee9434f5b4385f569908660c196a8d51, "Determine whether this class has a trivial copy constructor (C++\n[class.copy]p6, C++11 [class.copy]p12)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_0101334cb53f54c3872559e0e846be33, "Determine whether this class has a non-trivial copy constructor (C++\n[class.copy]p6, C++11 [class.copy]p12)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_69846605fd9d5c60b096b88a0b3f2efe, "Determine whether this class has a trivial move constructor (C++11\n[class.copy]p12)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_04635c16aff251989ef88ca9cf660aee, "Determine whether this class has a non-trivial move constructor (C++11\n[class.copy]p12)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_82ebb38055f957d7bd6c928524cedbf3, "Determine whether this class has a trivial copy assignment operator (C++\n[class.copy]p11, C++11 [class.copy]p25)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_147533aeb9ad56cea731ecb2ece41b37, "Determine whether this class has a non-trivial copy assignment operator\n(C++ [class.copy]p11, C++11 [class.copy]p25)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_a4b657dd2934517f88d47670c6631268, "Determine whether this class has a trivial move assignment operator\n(C++11 [class.copy]p25)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_add69794161f5782b70588a1fe1d51ed, "Determine whether this class has a non-trivial move assignment operator\n(C++11 [class.copy]p25)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_dbc24656827458159f89e3fc0ca2bbd9, "Determine whether this class has a trivial destructor (C++\n[class.dtor]p3)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_c41d3aeb8f15581681dcad8563f39501, "Determine whether this class has a non-trivial destructor (C++\n[class.dtor]p3)\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_17811ae767fb555ab7ceb7758370aacd, "Determine whether this class has a destructor which has no semantic\neffect.\n\nAny such destructor will be trivial, public, defaulted and not deleted,\nand will call only irrelevant destructors.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_c75e81466cee50b08e26b10db1eaf2ac, "Determine whether this class has a non-literal or/ volatile type\nnon-static data member or base class.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_87a40aef62f651bd93ea773c328d3a7a, "Determine whether this class is considered trivially copyable per (C++11\n[class]p6).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_1c16f2a7570d57b588871c4fca1ccd48, "Determine whether this class is considered trivial.\n\nC++11 [class]p6: 'A trivial class is a class that has a trivial default\nconstructor and is trivially copiable.'\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_5938ebe32a655c6297bf5fc47acdc606, "Determine whether this class is a literal type.\n\nC++11 [basic.types]p10: A class type that has all the following\nproperties: - it has a trivial destructor - every constructor call and\nfull-expression in the brace-or-equal-intializers for non-static data\nmembers (if any) is a constant expression. - it is an aggregate type or\nhas at least one constexpr constructor or constructor template that is\nnot a copy or move constructor, and - all of its non-static data members\nand base classes are of literal types\n\nWe resolve DR1361 by ignoring the second bullet. We resolve DR1452 by\ntreating types with trivial default constructors as literal types.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_ac6641bb92ee53769502dd3a1948ca34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If this record is an instantiation of a member class, retrieves the\nmember class from which it was instantiated.\n\nThis routine will return non-null for (non-templated) member classes of\nclass templates. For example, given:\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_d2a370a02d1355a18d1bd2e3c14bf154, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieves the class template that is described by this class\ndeclaration.\n\nEvery class template is represented as a ClassTemplateDecl and a\nCXXRecordDecl. The former contains template properties (such as the\ntemplate parameter lists) while the latter contains the actual\ndescription of the template's contents.\nClassTemplateDecl::getTemplatedDecl() retrieves the CXXRecordDecl that\nfrom a ClassTemplateDecl, while getDescribedClassTemplate() retrieves\nthe ClassTemplateDecl from a CXXRecordDecl.\n\n:Return Type:\n    :py:class:`clanglite.clang.ClassTemplateDecl`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_96dc3753e0d153219c5d17cece281cea, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_f65e931d0c9a5427a488f136c1edb18d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the record declaration from which this record could be\ninstantiated. Returns null if this class is not a template\ninstantiation.\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_e01f29f776b150d588237152e3166e12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_f84e53f7e2c25925b0c98f6818404e47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Returns the destructor decl for this class.\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXDestructorDecl`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_e396a196f573530487980cfc0b03f106, "Returns true if the class destructor, or any implicitly invoked\ndestructors are marked noreturn.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_2c4b4be2c2c75388acb9dd052e5a2235, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If the class is a local class [class.local], returns the enclosing\nfunction declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionDecl`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_19b864f4c61058e192154cb1ca5111c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_c40e88fe1ac1510390945e05cda0ac4c, "Determine whether this dependent class is a current instantiation, when\nviewed from within the given context.\n\n:Parameter:\n    `CurContext` (:py:class:`clanglite.clang.DeclContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_5e19891610ab5779835e354c4480e106, "Determine whether this class is derived from the class\n:raw-latex:`\\p `Base.\n\nThis routine only determines whether this class is derived from\n:raw-latex:`\\p `Base, but does not account for factors that may make a\nDerived -> Base class ill-formed, such as private/protected inheritance\nor multiple, ambiguous base class subobjects.\n\n:Parameter:\n    `Base` (:py:class:`clanglite.clang.CXXRecordDecl`) - the base class we are searching for.\n\n:Returns:\n    true if this class is derived from Base, false otherwise.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_3d476dfd864751d59c871de579960100, "Determine whether this class is virtually derived from the class\n:raw-latex:`\\p `Base.\n\nThis routine only determines whether this class is virtually derived\nfrom :raw-latex:`\\p `Base, but does not account for factors that may\nmake a Derived -> Base class ill-formed, such as private/protected\ninheritance or multiple, ambiguous base class subobjects.\n\n:Parameter:\n    `Base` (:py:class:`clanglite.clang.CXXRecordDecl`) - the base class we are searching for.\n\n:Returns:\n    true if this class is virtually derived from Base, false otherwise.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_6716c294f192545999ae5116f16e93c5, "Determine whether this class is provably not derived from the type\n:raw-latex:`\\p `Base.\n\n:Parameter:\n    `Base` (:py:class:`clanglite.clang.CXXRecordDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_1a3449c5b6fb5ab49a457af059dbd386, ":Parameter:\n    `Context` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_1fb7fac90f1b5a68900f5419aaa95350, "Calculates the access of a decl that is reached along a path.\n\n:Parameters:\n  - `PathAccess` (:py:obj:`clanglite.clang.access_specifier`) - Undocumented\n  - `DeclAccess` (:py:obj:`clanglite.clang.access_specifier`) - Undocumented\n\n:Return Type:\n    :py:obj:`clanglite.clang.access_specifier`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_ea8d7391c68254a2a7b7aac8ec687b68, "Indicates that the declaration of a defaulted or deleted special member\nfunction is now complete.\n\n:Parameter:\n    `MD` (:py:class:`clanglite.clang.CXXMethodDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_5587df8d769159b5bb56eff2b9d71f1e, "Determine whether this class may end up being abstract, even though it\nis not yet known to be abstract.\n\n:Returns:\n    true if this class is not known to be abstract but has any base classes\n    that are abstract. In this case, :raw-latex:`\\c c`ompleteDefinition()\n    will need to compute final overriders to determine whether the class is\n    actually abstract.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_44ffd2086e7758788f4946f40d38f6bb, "If this is the closure type of a lambda expression, retrieve the number\nto be used for name mangling in the Itanium C++ ABI.\n\nZero indicates that this closure type has internal linkage, so the\nmangling number does not matter, while a non-zero value indicates which\nlambda expression this is in this particular context.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_6caf99412c885c01b69798765cbd642b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the declaration that provides additional context for a lambda,\nwhen the normal declaration context is not specific enough.\n\nCertain contexts (default arguments of in-class function parameters and\nthe initializers of data members) have separate name mangling rules for\nlambdas within the Itanium C++ ABI. For these cases, this routine\nprovides the declaration in which the lambda occurs, e.g., the function\nparameter or the non-static data member. Otherwise, it returns NULL to\nimply that the declaration context suffices.\n\n:Return Type:\n    :py:class:`clanglite.clang.Decl`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_82e94b5450025e0f8c5004d790d39e33, "Set the mangling number and context declaration for a lambda class.\n\n:Parameters:\n  - `ManglingNumber` (:cpp:any:`unsigned` int) - Undocumented\n  - `ContextDecl` (:py:class:`clanglite.clang.Decl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_58ca48a3bf18540195797af2fafd76c9, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_0e059ab545d757438c27dfb74bb471d7, "Determine whether this lambda expression was known to be dependent at\nthe time it was created, even if its context does not appear to be\ndependent.\n\nThis flag is a workaround for an issue with parsing, where default\narguments are parsed before their enclosing function declarations have\nbeen created. This means that any lambda expressions within those\ndefault arguments will have as their DeclContext the context enclosing\nthe function declaration, which may be non-dependent even when the\nfunction declaration itself is dependent. This flag indicates when we\nknow that the lambda is dependent despite that.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_415df47dc8dd5a0abe2ff9bf5c9032f6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_28ada20362ec5a3693bf05f9091caeee, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_30c8c4e1f98159ffb93116b9490c2b5e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_34a2ddd426cc5e5384d43e1276d3eab7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_5f12b293d8b05d9a8f8c8f23e2ab3428, "");

    if(autowig::Held< class ::clang::CXXRecordDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::CXXRecordDecl >::Type, autowig::Held< class ::clang::RecordDecl >::Type >();
    }

}