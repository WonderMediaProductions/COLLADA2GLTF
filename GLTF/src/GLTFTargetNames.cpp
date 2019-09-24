#include "GLTFTargetNames.h"

#include "rapidjson/stringbuffer.h"
#include "rapidjson/writer.h"

std::string GLTF::MorphTargetNames::typeName()
{
	return "MorphTargetNames";
}

void GLTF::MorphTargetNames::writeJSON(void* writer, GLTF::Options* options)
{
	GLTF::Object::writeJSON(writer, options);
	rapidjson::Writer<rapidjson::StringBuffer>* jsonWriter = (rapidjson::Writer<rapidjson::StringBuffer>*)writer;
	jsonWriter->StartArray();
	for (std::string morph : morphs)
	{
		jsonWriter->String(morph.c_str());
	}
	jsonWriter->EndArray();
}

void GLTF::MorphTargetNames::addName(const std::string morph)
{
	morphs.emplace_back(morph);
}
