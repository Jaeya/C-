#pragma once


class Mystring
{
public:
	Mystring(); // 기본 생성자
	Mystring(const char* pszParam); // 변환 생성자
	Mystring(const Mystring& pszParam); // 변환 생성자

	~Mystring();

	//연산자 오버로딩
	// 
	// left = right
	Mystring& operator=(const Mystring& rhs);

	//정적멤버 변수(=클래스의 멤버변수)
	
	static int m_nCount;// 현재까지 생성된 인스턴스의 갯수 관리용

private:
	
	char* m_pszData; // 동적메모리(4b)--> malloc/free
	int m_nLength; // 문자열의 길이

public:
	int SetString(const char* pszParam);
	const char* Getstring() const;
private:
	void Release(); //동적 메모리 해제함수
	
		
};