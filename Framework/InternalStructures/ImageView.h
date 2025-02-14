//------------------------------------------------------------------------------
//
// File Name:	ImageView.h
// Author(s):	Jonathan Bourim (j.bourim)
// Date:        6/23/2020 
//
//------------------------------------------------------------------------------
#pragma once

namespace bk {

class ImageView : public IVulkanType<vk::ImageView>, public IOwned<Device>
{
public:
	BK_TYPE_VULKAN_OWNED_BODY(ImageView, IOwned<Device>)
	BK_TYPE_VULKAN_OWNED_GENERIC(ImageView, ImageView)
	void CreateTexture2DView(vk::Image image, Device* owner);
};

}