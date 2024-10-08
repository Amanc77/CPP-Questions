 /** Git Commands

1. Setting Up Your Repository
Initialize a New Repository
git init

Clone an Existing Repository
git clone <repository-url>

2. Adding Files
Add all files to the staging area
git add .

3. Committing Changes
Commit the staged changes with a message
git commit -m "Your commit message here"

4. Pushing Changes to GitHub
Push changes to the specified branch on GitHub
git push origin <branch-name>

5. Viewing Branches
See all branches in your repository
git branch

6. Switching Branches
Switch to another branch
git checkout <branch-name>

7. Creating a New Branch
Create a new branch and switch to it
git checkout -b <new-branch-name>

8. Viewing the Current Branch
Check which branch you are currently on
git branch --show-current
Alternatively
git status

9. Fetching and Pulling Changes
Fetch changes from the remote repository
git fetch origin
Pull changes (fetch + merge)
git pull origin <branch-name>

10. Merging Branches
Merge another branch into your current branch
Step 1: Switch to the target branch
git checkout main
Step 2: Merge the desired branch
git merge feature-branch

11. Checking the Status
See the current status of your working directory and staging area
git status

12. Viewing Commit History
View the commit history
git log
For a concise view
git log --oneline

13. Deleting a Branch
Delete a branch (ensure you're not currently on it)
git branch -d <branch-name>  Deletes only if fully merged
git branch -D <branch-name>  Forces deletion

14. Stashing Changes
Stash uncommitted changes
git stash
Apply stashed changes later
git stash apply

15. Setting Upstream Branch
When pushing a new branch for the first time
git push -u origin <new-branch-name>

Summary of Common Commands
| Action                      | Command                          |
|-----------------------------|----------------------------------|
| Initialize Repository       | git init                         |
| Clone Repository            | git clone <repo-url>            |
| Add All Files               | git add .                        |
| Commit Changes              | git commit -m "message"         |
| Push Changes                | git push origin <branch-name>   |
| View Branches               | git branch                       |
| Switch Branch               | git checkout <branch-name>       |
| Create New Branch           | git checkout -b <new-branch>    |
| Current Branch              | git branch --show-current        |
| Fetch Changes               | git fetch origin                 |
| Pull Changes                | git pull origin <branch-name>    |
| Merge Branches              | git merge <branch-name>          |
| View Status                 | git status                       |
| View Commit History         | git log                          |
| Delete Branch               | git branch -d <branch-name>      |
| Stash Changes               | git stash                        |
| Apply Stashed Changes       | git stash apply                  |
"""
+**/