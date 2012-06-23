/*
 * Copyright 2012, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef BCC_EXECUTION_ENGINE_INPUT_FILE_H
#define BCC_EXECUTION_ENGINE_INPUT_FILE_H

#include "File.h"
#include "FileBase.h"

namespace bcc {

class InputFile : public File<FileBase::kReadMode> {
  typedef File<FileBase::kReadMode> super;
public:
  InputFile(const std::string &pFilename, unsigned pFlags = 0);

  ssize_t read(void *pBuf, size_t count);
};

} // end namespace bcc

#endif  // BCC_EXECUTION_ENGINE_INPUT_FILE_H
