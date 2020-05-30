pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                cmake test
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
    }
}