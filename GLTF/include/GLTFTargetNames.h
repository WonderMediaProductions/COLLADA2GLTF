#pragma once

#include "GLTFObject.h"

namespace GLTF {
    class MorphTargetNames : public GLTF::Object {
        std::vector <std::string> morphs;

    public:
        virtual std::string typeName();
        void addName(const std::string morph);
        virtual void writeJSON(void* writer, GLTF::Options* options);
    };
}