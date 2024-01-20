#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>
#include <pybind11/numpy.h>

#include "libsrcml_caller/libsrcml_caller.h"

namespace py = pybind11;


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// <litgen_glue_code>  // Autogenerated code below! Do not edit!

// </litgen_glue_code> // Autogenerated code end
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE END !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void py_init_module_lg_srcml_cpp_caller(py::module& m)
{
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // <litgen_pydef> // Autogenerated code below! Do not edit!
    ////////////////////    <generated_from:libsrcml_caller.h>    ////////////////////
    py::enum_<CodeLanguage>(m, "CodeLanguage", py::arithmetic(), "")
        .value("c", CodeLanguage::C, "")
        .value("c_sharp", CodeLanguage::CSharp, "")
        .value("c_plus_plus", CodeLanguage::CPlusPlus, "")
        .value("java", CodeLanguage::Java, "")
        .value("objective_c", CodeLanguage::ObjectiveC, "");


    m.def("to_code",
        to_code, py::arg("xml_str"), py::arg("encoding_src") = "utf-8", py::arg("encoding_xml") = "utf-8");

    m.def("to_srcml",
        to_srcml, py::arg("code"), py::arg("language"), py::arg("include_positions") = true, py::arg("encoding_src") = "utf-8", py::arg("encoding_xml") = "utf-8");
    ////////////////////    </generated_from:libsrcml_caller.h>    ////////////////////

    // </litgen_pydef> // Autogenerated code end
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE END !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
