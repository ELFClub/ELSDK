
Pod::Spec.new do |spec|

  spec.name         = "ELSDK"
  spec.version      = "6.2.1"
  spec.summary      = "use ELSDK."

  spec.description  = <<-DESC
                      a easy way to use ELSDK
                   DESC

  spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author       = { "bruce" => "1064124945@qq.com" }

  spec.platform     = :ios, "9.0"



  spec.homepage     = "https://github.com/ELFClub/ELSDK.git"
  spec.source       = { :git => "https://github.com/ELFClub/ELSDK.git", :tag => spec.version.to_s }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #


  spec.frameworks   = 'UIKit', 'Security', 'AdSupport'
  spec.libraries    = 'c++'

  spec.vendored_frameworks =  ['ELSDK/Frameworks/ELSDK.framework','ELSDK/Frameworks/TapDB_iOS.framework']

  valid_archs     = ['armv7', 'armv7s', 'x86_64', 'arm64']
  spec.xcconfig   = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }
  
  spec.dependency 'AppsFlyerFramework', '~> 5.4.1'
  spec.dependency 'FBSDKCoreKit','~> 6.5.2'
  spec.dependency 'FBSDKLoginKit','~> 6.5.2'

end
