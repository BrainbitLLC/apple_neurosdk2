Pod::Spec.new do |spec|
  spec.name         = "neurosdk2"
  spec.version      = "1.0.14"
  spec.summary      = "Neurosdk is a powerful tool for working with neuro-sensors BrainBit, BrainBitBlack, Callibri and Kolibri. All these devices work with BLE 4.0+ technology. SDK allows you to connect, read the parameters of devices, as well as receive signals of various types from the selected device."
  spec.homepage     = "https://gitlab.com/neurosdk2/neurosamples"
  spec.license      = { :type => 'MIT' } 
  spec.author       = { "BrainBit INC." => "support@brainbit.com" }
  spec.ios.deployment_target = "12.0"
  spec.osx.deployment_target = "10.14"
  spec.source       = { :git => "https://github.com/BrainbitLLC/apple_neurosdk2.git", :tag => "#{spec.version}" }
  spec.osx.vendored_frameworks = 'neurosdk2.xcframework/ios-arm64/libneurosdk2.dylib', 'neurosdk2.xcframework/ios-arm64_x86_64-simulator/libneurosdk2.dylib', 'neurosdk2.xcframework/ios-arm64_x86_64-maccatalyst/libneurosdk2.dylib'
  spec.ios.vendored_frameworks = 'neurosdk2.xcframework/macos-arm64_x86_64/libneurosdk2.dylib'
end
