Pod::Spec.new do |s|
  s.name             = 'GTMotionAnimator'
  s.version          = '0.0.1'
  s.summary          = 'A Motion Animator creates performant, interruptible animations from motion specs.'
  s.homepage         = 'https://github.com/liuxc123/GTMotionAnimator'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'liuxc123' => 'lxc_work@126.com' }
  s.source           = { :git => 'https://github.com/liuxc123/GTMotionAnimator.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.requires_arc = true

  s.public_header_files = "src/*.h"
  s.source_files = "src/*.{h,m,mm}", "src/private/*.{h,m,mm}"

  s.dependency "GTMotionInterchange", '~> 0.0.2'
end
