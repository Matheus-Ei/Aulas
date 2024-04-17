#include <iostream>
#include <vector>
#include <algorithm>

struct Team {
    std::string name;
    int wins;
    int draws;
    int goalsFor;
    int goalsAgainst;
    int points;

    Team(const std::string& n) : name(n), wins(0), draws(0), goalsFor(0), goalsAgainst(0), points(0) {}
};

bool compareTeams(const Team& team1, const Team& team2) {
    if (team1.points != team2.points)
        return team1.points > team2.points;
    if (team1.goalsFor - team1.goalsAgainst != team2.goalsFor - team2.goalsAgainst)
        return team1.goalsFor - team1.goalsAgainst > team2.goalsFor - team2.goalsAgainst;
    return team1.goalsFor > team2.goalsFor;
}

int main() {
    std::vector<Team> teams;

    // Ler os nomes dos times
    std::vector<std::string> teamNames = {
        "Time A", "Time B", "Time C", "Time D", "Time E",
        "Time F", "Time G", "Time H", "Time I", "Time J",
        "Time K", "Time L", "Time M", "Time N", "Time O",
        "Time P", "Time Q", "Time R", "Time S", "Time T"
    };

    // Inicializar os times
    for (const auto& name : teamNames) {
        teams.push_back(Team(name));
    }

    // Ler os resultados dos jogos
    for (int i = 0; i < teams.size(); i++) {
        for (int j = i + 1; j < teams.size(); j++) {
            int teamAGoals, teamBGoals;
            std::cout << "Digite os gols do jogo " << teams[i].name << " vs " << teams[j].name << ": ";
            std::cin >> teamAGoals >> teamBGoals;

            teams[i].goalsFor += teamAGoals;
            teams[i].goalsAgainst += teamBGoals;
            teams[j].goalsFor += teamBGoals;
            teams[j].goalsAgainst += teamAGoals;

            if (teamAGoals > teamBGoals) {
                teams[i].wins++;
                teams[i].points += 3;
            } else if (teamAGoals < teamBGoals) {
                teams[j].wins++;
                teams[j].points += 3;
            } else {
                teams[i].draws++;
                teams[i].points += 1;
                teams[j].draws++;
                teams[j].points += 1;
            }
        }
    }

    // Ordenar os times com base nos critérios de classificação
    std::sort(teams.begin(), teams.end(), compareTeams);

    // Imprimir a classificação
    std::cout << "Classificacao:\n";
    for (int i = 0; i < teams.size(); i++) {
        std::cout << i + 1 << ". " << teams[i].name << " - Pontos: " << teams[i].points
            << ", Gols a favor: " << teams[i].goalsFor << ", Gols contra: " << teams[i].goalsAgainst << "\n";
    }

    return 0;
}
