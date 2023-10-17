#include "TextureConverter.h"

void TextureConverter::ConvertTextureWICToDDS(const std::string& filePath) {
	//テクスチャファイルを読み込む
	LoadWICTextureFromFile(filePath);

	//�ADDS形式に変換して書き出す
}

void TextureConverter::LoadWICTextureFromFile(const std::string& filePath) {
	//ファイルパスをワイド文字列に変換する
	std::wstring wfilePath = ConvertMultiByteStringToWideString(filePath);

	//�Aテクスチャを読み込む
}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString) {

	//ワイド文字列に変換した際の文字列数を計算
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);

	//ワイド文字列
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//ワイド文字列に変換
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}
