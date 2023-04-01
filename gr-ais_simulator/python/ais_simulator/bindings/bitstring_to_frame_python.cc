/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(bitstring_to_frame.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(4da6eda4379ae0ba187ce170bbbdcfc6)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/ais_simulator/bitstring_to_frame.h>
// pydoc.h is automatically generated in the build directory
#include <bitstring_to_frame_pydoc.h>

void bind_bitstring_to_frame(py::module& m)
{

    using bitstring_to_frame = ::gr::ais_simulator::bitstring_to_frame;


    py::class_<bitstring_to_frame,
               gr::tagged_stream_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<bitstring_to_frame>>(
        m, "bitstring_to_frame", D(bitstring_to_frame))

        .def(py::init(&bitstring_to_frame::make),
             py::arg("enable_nrzi"),
             py::arg("len_tag_key"),
             D(bitstring_to_frame, make))


        ;
}
