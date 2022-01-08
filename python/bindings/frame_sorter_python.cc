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
/* BINDTOOL_HEADER_FILE(frame_sorter.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(54f410371253bad52f6350f1c42777b0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <iridium/frame_sorter.h>
// pydoc.h is automatically generated in the build directory
#include <frame_sorter_pydoc.h>

void bind_frame_sorter(py::module& m)
{

    using frame_sorter    = ::gr::iridium::frame_sorter;


    py::class_<frame_sorter, gr::block, gr::basic_block,
        std::shared_ptr<frame_sorter>>(m, "frame_sorter", D(frame_sorter))

        .def(py::init(&frame_sorter::make),
           D(frame_sorter,make)
        )
        



        ;




}








