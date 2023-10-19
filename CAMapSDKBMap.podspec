#
# Be sure to run `pod lib lint AdvanceSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    
    s.name             = 'CAMapSDKBMap'
    s.version          = '1.0.4'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.summary          = '地图融合SDK'
    s.description      = <<-DESC
    封装常见地图SDK
    DESC
    
    s.homepage         = 'https://github.com/datoujiejie/camap-sdk'

    s.author           = "datoujiejie"
    s.source           = { :git => 'https://github.com/datoujiejie/camap-sdk.git', :tag => s.version }
    
    s.user_target_xcconfig = {'OTHER_LDFLAGS' => ['-ObjC']}
    valid_archs = ['x86_64','arm64']
    # bitcode
    #    s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO', 'VALID_ARCHS' => valid_archs.join(' '), 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    #    s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO'}
    s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO'}
    
    s.ios.deployment_target = '12.0'
    s.platform     = :ios, "12.0"
    s.requires_arc = true
    s.static_framework = true
    s.subspec 'BMAP' do |bmap|
        bmap.vendored_frameworks = 'CAMapSDKBMap.xcframework'
        bmap.dependency 'CAMapSDK'
        bmap.dependency 'BaiduMapKit'
        bmap.dependency 'BMKLocationKit'
        bmap.frameworks = 'UIKit', 'MapKit', 'WebKit', 'MediaPlayer', 'CoreLocation', 'AdSupport', 'CoreMedia', 'AVFoundation', 'CoreTelephony', 'StoreKit', 'SystemConfiguration', 'MobileCoreServices', 'CoreMotion', 'Accelerate','AudioToolbox','JavaScriptCore','Security','CoreImage','AudioToolbox','ImageIO','QuartzCore','CoreGraphics','CoreText'
        bmap.libraries = 'c++', 'resolv', 'z', 'sqlite3', 'bz2', 'xml2', 'iconv', 'c++abi'
    end
        
    s.xcconfig = {
        'VALID_ARCHS' =>  valid_archs.join(' '),
    }

end
