// Copyright (c) .NET Foundation and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef __SDK_INFO_H_
#define __SDK_INFO_H_

#include "libhost.h"

struct sdk_info
{
    sdk_info(const pal::string_t& base_path, const pal::string_t& full_path, const fx_ver_t& version, int32_t hive_depth)
        : base_path(base_path)
        , full_path(full_path)
        , version(version)
        , hive_depth(hive_depth) { }

    static void get_all_sdk_infos(
        const pal::string_t& own_dir,
        std::vector<sdk_info>* sdk_infos);

    static bool print_all_sdks(const pal::string_t& own_dir, const pal::string_t& leading_whitespace);

    pal::string_t base_path;
    pal::string_t full_path;
    fx_ver_t version;
    int32_t hive_depth;
};

#endif // __SDK_INFO_H_
