/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKPIPELINE_H__
#define __VK_VKPIPELINE_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipeline: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkPipeline instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkPipeline();
    ~_VkPipeline();

};

#endif