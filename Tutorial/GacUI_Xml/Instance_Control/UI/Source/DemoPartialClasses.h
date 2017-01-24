/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOPARTIALCLASSES

#include "GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace vl_workflow_global
{
	class __vwsnc1_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	class __vwsnc3_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
	class __vwsnc4_Demo_demo_MyControlConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
	struct __vwsnf1_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
	struct __vwsnf2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
}

namespace demo
{
	class MainWindowConstructor;
	class MainWindow;
	class MyControlConstructor;
	class MyControl;

	class MainWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MainWindowConstructor>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindowConstructor>;
#endif
	protected:
		::demo::MainWindow* __vwsn_precompile_0 = static_cast<::demo::MainWindow*>(nullptr);
		::demo::MyControl* __vwsn_precompile_1 = static_cast<::demo::MyControl*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_2 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_);
	public:
		MainWindowConstructor();
	};

	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		MainWindow();
		~MainWindow();
	};

	class MyControlConstructor : public ::vl::Object, public ::vl::reflection::Description<MyControlConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc3_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_Demo_demo_MyControlConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MyControlConstructor>;
#endif
	protected:
		::demo::MyControl* self = static_cast<::demo::MyControl*>(nullptr);
		::vl::presentation::controls::GuiLabel* __vwsn_precompile_0 = static_cast<::vl::presentation::controls::GuiLabel*>(nullptr);
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_1 = static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr);
		::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_precompile_2 = static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr);
		void __vwsn_initialize_instance_(::demo::MyControl* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_);
	public:
		MyControlConstructor();
	};

	class MyControl : public ::vl::presentation::controls::GuiCustomControl, public ::demo::MyControlConstructor, public ::vl::reflection::Description<MyControl>
	{
		friend class ::demo::MyControlConstructor;
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc3_Demo_demo_MyControlConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_Demo_demo_MyControlConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend struct ::vl_workflow_global::__vwsnf1_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf2_Demo_demo_MyControlConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MyControl>;
#endif
	public:
		MyControl();
		~MyControl();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class Demo
	{
	public:

		static Demo& Instance();
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
