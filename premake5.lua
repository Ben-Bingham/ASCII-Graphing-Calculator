workspace "ASCII Graphing Calculator"
	configurations {"Debug", "Release"}

	project "ASCII Graphing Calculator"
		kind "ConsoleApp"
		language "C++"
		location "ASCII Graphing Calculator"

		includedirs {"ASCII Graphing Calculator/include", "ASCII Graphing Calculator/src"}
		files {"**.cpp", "**.h"}

		targetdir ("out/bin")
		objdir ("out/bin-int")

		filter "configurations:Debug"
			defines { "DEBUG" }
			symbols "On"

		filter "configurations:Release"
			defines { "NDEBUG" }
			optimize "On"

		filter {}

newaction {
	trigger = "clean",
	description = "Removes all binaries, intermediate binaries and project files.",
	execute = function()
		print("Removing binaries")
		print("Removing intermediate binaries")
		os.rmdir("out")
		print("Removing project files")
		os.remove("**.sln")
		os.remove("**.vcxproj")
		os.remove("**.filters")
		os.remove("**.user")
	end
}