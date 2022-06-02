#pragma once

#include <string>
#include <vector>
namespace IO {
	namespace GUI {
		class Screen {
		private:
			int m_ScreenWidth;
			int m_ScreenHeight;

			std::string m_Screen_String;
			std::vector<std::vector<int>> m_Screen_Data;

		public:
			Screen(int screenWidth, int screenHeight);
		};
	}
}