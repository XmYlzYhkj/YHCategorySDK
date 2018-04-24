
Pod::Spec.new do |s|

  s.name         = "YHCategorySDK"
  s.version      = "1.0.0"
  s.summary      = "公司基础SDK之一"

  s.description  = "基础SDK之一，提供一些常用的、通用的扩展类别。"

  s.homepage     = "https://github.com/XmYlzYhkj/YHCategorySDK"

  s.license      = "MIT"

  s.author       = { "XmYhkj" => "yhkj_xm@163.com" }
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHCategorySDK.git", :tag => "1.0.0" }

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  s.vendored_frameworks = ["Classes/YHCategorySDK.framework"]
  
end
