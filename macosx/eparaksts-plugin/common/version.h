/*
 * Estonian ID card plugin for web browsers
 *
 * Copyright (C) 2010-2011 Codeborne <info@codeborne.com>
 *
 * This is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef ESTEID_VERSION_H
#define ESTEID_VERSION_H

#ifdef WIN64
#define ESTEID_PLUGIN_VERSION "1.0.2 64bit"
#else
#define ESTEID_PLUGIN_VERSION "1.0.2 32bit"
#endif
#define PLUGIN_NAME        "eParaksts Browser Plugin"
#define PLUGIN_DESCRIPTION "Allows digital signing with Latvian ID cards"
#define MIME_TYPE         "application/x-eparaksts"

#endif
    
