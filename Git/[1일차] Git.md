# [1일차] Git 

## 📁 Terminal Command 정리

| 명령어                              | 설명                                                                 | tag |
|-----------------------------------|----------------------------------------------------------------------|-----|
| `mkdir -p dev/git_test`          | 디렉토리 생성                                                        |     |
| `~/`                             | 홈 디렉토리                                                          |     |
| `git init`                       | 하나의 브랜치 생성                                                   | git |
| `git config --list`             | 현재 git 설정 확인                                                   | git |
| `git config --list \| grep init`| 현재 git의 defaultBranch 확인하는 명령어                            | git |
| `echo "Hello Git"`              | 현재 보고 있는 터미널에 출력하기 위한 명령어                         |     |
| `echo "Hello Git" > sample.txt` | 문자열을 담은 `.txt` 파일 생성                                       |     |
| `cat sample.txt`                | `.txt` 파일 내용 확인                                                |     |
| `git status`                    | 현재 git 상태를 확인                                                | git |
| `git add *.txt`                 | `.txt` 확장자를 가진 모든 파일 추가                                  | git |
| `git remote add origin [주소]`  | 로컬 폴더와 깃 레파지토리 리모트 연결하기                            | git |
| `git remote -v`                 | remote와 연결 상태 확인                                              | git |
| `git push -u origin main`       | 현재 브랜치(main)을 origin/main과 연결 (upstream 브랜치 최초 설정) | git |
| `git log`                       | 지금까지의 커밋 이력을 모두 확인                                     | git |
| `tab`                           | 자동완성                                                             |     |
| `^C`                            | Control + C 현재 상태 벗어나기                                      |     |






<br>

## 📘 개념 및 설명 정리

| 항목             | 설명                                                                                                  |
|------------------|-------------------------------------------------------------------------------------------------------|
| 숨김 파일 확인    | `shift + command + .`                                                                                 |
| `.git`           | 브랜치가 생성된 폴더에 자동 생성되는 Git log 저장 데이터 베이스                                         |
| `git config --list` | 아무것도 출력되지 않으면 현재 git 설정이 없다는 의미                                                   |
| master VS main   | 과거에는 `master`라는 용어를 사용했으나 → `main`으로 변경됨 (인종 차별 이슈로)                          |
| `>`              | 꺾쇠 명령어. 왼쪽 내용을 오른쪽에 입력, 저장 (`=` 역할)                                                |
| `>>`             | 왼쪽 내용을 오른쪽에 추가, 저장 (`+=` 역할)                                                           |
| GitHub 유사 툴    | GitKraken, Fork, GitLab                                                                               |
| `origin`         | `origin`은 원격 저장소(remote repository)의 기본 이름                                                   |
| 🔐 SSH key       | [SSH Key 설정 문서](https://docs.github.com/ko/authentication/managing-commit-signature-verification) |
| 명령어 정리       | [Git 명령어 치트시트](https://education.github.com/git-cheat-sheet-education.pdf)                    |



<br>

### 👻 Quiz
1. ~/dev/git_test2 에 새로운 레포 만들기
2. a.txt 파일에 aaa 작성 후 커밋
2. a.txt 파일에 aaa 작성 후 커밋
3. b.txt 파일에 bbb 작성 후 커밋
4. a.txt 파일에 ccc 추가 후 커밋
5. github 에 remote 저장소 만들고 푸시
6. 처음 커밋으로 hard reset 하기 (어떤 파일이 남아있고, 내용이 뭔지 예측이 맞는지 확인)
7. remote 내용으로 맞추기
8. ~/dev/git_test2 폴더 삭제
9. remote 저장소를 ~/dev/git_test3 로 복사
10. d.txt 파일 에 ddd 작성 후 커밋, 푸시
11. 이후 배운 내용 정리 및 자유롭게 해 보기
