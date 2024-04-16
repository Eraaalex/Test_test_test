git add .
git commit --amend

COMMITTER_DATE="$(date --date='2 days ago')" GIT_AUTHOR_DATE="$(date --date='2 days ago')" git commit --amend
        $env:GIT_COMMITTER_DATE = (Get-Date).AddDays(-2).ToString("R")

git commit --amend --no-edit
        git push -f
        DAY FIRST COMMIT